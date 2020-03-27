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

    int t,n,s;
    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }



        ll ss=0,mx=0;

        int ans=0,ans2=-1,ans3=0;

        for(int i=0; i<n; i++)
        {
            if(ss+a[i]<=s)
            {
                ss=ss+a[i];
                //cout<<a[i]<<" **"<<endl;
                if(mx<a[i])
                {
                    mx=a[i];
                    ans=i+1;
                }
            }
            else
            {
                if(mx==0)
                {
                    if(i+1<n && a[i+1]<=s)
                        ans2=1;
                    else
                        ans2=0;
                }


                if((ss+a[i])-mx<=s)
                {
                    if(mx>=a[i])
                        ans3=ans;
                    else
                        ans3=i+1;
                }
                else
                    ans3=i+1;

                break;
            }



        }

        if(ans3==0)
            cout<<0<<endl;
        else if(ans2!=-1)
            cout<<ans2<<endl;
        else
            cout<<ans3<<endl;



    }






    return 0;
}
