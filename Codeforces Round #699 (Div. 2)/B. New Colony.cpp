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

    int t,k,n;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll ck=0,ans=-1;
        bool f=false;

        for(int i=0; i<n; i++)
        {
            if(i!=0 && a[i-1]<a[i])
            {

                //cout<<i<<" -- i"<<endl;
                int c=0;
                ll d=a[i]-a[i-1];

                for(int j=i-1; j>=0; j--)
                {
                    if(a[j]>a[i])
                        break;
                    else
                        c++,a[j]=a[i];


                }


                ll x=c*d;

                //cout<<x<<" ** "<<d<<" "<<c<<"  ck "<<ck<<endl;

                if(ck+x>=k)
                {


                    int r=k-ck;

                    int z=r%c;
                    if(z==0)
                        z=c;

                    //cout<<i<<" "<<z<<endl;

                    ans=i-z;
                    break;


                }
                else
                    ck=ck+x;

                //cout<<ck<<endl;



            }

        }

        if(ans!=-1)
            ans++;


        cout<<ans<<endl;





    }




    return 0;
}
