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

    int t,n;

    cin>>t;

    while(t--)
    {

        cin>>n;

        ll a[n],b[n],tm[n],pb=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];

        }

        for(int i=0; i<n; i++)
        {
            cin>>tm[i];

        }

        int ans;

        for(int i=0; i<n; i++)
        {
            if(i!=0)
            {
                ll tn=a[i]-b[i-1]+tm[i];

                ll st=(b[i]-a[i])/2;

                if((b[i]-a[i])%2!=0)
                    st++;

                ll av=pb+tn;

                pb=max(av+st,b[i]);

                if(i==n-1)
                    ans=av;


            }
            else
            {
                ll tn=a[i]+tm[i];

                ll st=(b[i]-a[i])/2;

                if((b[i]-a[i])%2!=0)
                    st++;



                ll av=pb+tn;

                pb=max(av+st,b[i]);

                if(i==n-1)
                    ans=av;

            }

            //cout<<pb<<" **"<<endl;

        }

        cout<<ans<<endl;




    }




    return 0;
}

