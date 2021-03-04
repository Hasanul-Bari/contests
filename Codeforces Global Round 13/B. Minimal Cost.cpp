#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t;
    cin>>t;

    ll n,u,v;

    while(t--)
    {
        cin>>n>>u>>v;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];


        }

        ll mn=INT_MAX;

        for(int i=0; i<n; i++)
        {
           if(i==0)
           {
                //cout<<a[i]<<" "<<a[i+1]<<endl;
                if(a[i+1]==a[i])
                {
                    mn=min(mn,u+v);
                    mn=min(mn,2*v);
                }
                else if(a[i+1]-1==a[i])
                {
                    if(a[i]+3<=1000001)
                        mn=min(mn,3*v);

                    if(a[i]-1>=0)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else if(a[i+1]+1==a[i])
                {
                    if(a[i]-3>=0)
                        mn=min(mn,3*v);

                    if(a[i]+1<=1000001)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else
                    mn=0;
           }
           else if(i==n-1)
           {
                if(a[i-1]==a[i])
                {
                    mn=min(mn,u+v);
                    mn=min(mn,2*v);


                }
                else if(a[i-1]-1==a[i])
                {
                    if(a[i]+3<=1000001)
                        mn=min(mn,3*v);

                    if(a[i]-1>=0)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else if(a[i-1]+1==a[i])
                {
                    if(a[i]-3>=0)
                        mn=min(mn,3*v);

                    if(a[i]+1<=1000001)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else
                    mn=0;
           }
           else
           {
                //down

                if(a[i+1]==a[i])
                {
                    mn=min(mn,u+v);
                    mn=min(mn,2*v);

                    if(i-1>=0 && a[i-1]!=a[i])
                        mn=min(mn,u);

                }
                else if(a[i+1]-1==a[i])
                {
                    if(a[i]+3<=1000001)
                        mn=min(mn,3*v);

                    if(a[i]-1>=0)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else if(a[i+1]+1==a[i])
                {
                    if(a[i]-3>=0)
                        mn=min(mn,3*v);

                    if(a[i]+1<=1000001)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else
                    mn=0;



                //up

                if(a[i-1]==a[i])
                {
                    mn=min(mn,u+v);
                    mn=min(mn,2*v);

                    if(i+1<n && a[i+1]!=a[i])
                        mn=min(mn,u);
                }
                else if(a[i-1]-1==a[i])
                {
                    if(a[i]+3<=1000001)
                        mn=min(mn,3*v);

                    if(a[i]-1>=0)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else if(a[i-1]+1==a[i])
                {
                    if(a[i]-3>=0)
                        mn=min(mn,3*v);

                    if(a[i]+1<=1000001)
                        mn=min(mn,v);

                    mn=min(mn,u);
                }
                else
                    mn=0;


           }

        }

        cout<<mn<<endl;


    }




    return 0;
}
