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

    ll n,k,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        ll s=0,p=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i!=0)
            {
                ll r=p*k;
                ll l=x*100;

                //cout<<l<<" ** "<<r<<" "<<p<<endl;

                if(l>r)
                {
                    s=s+((l-r)/k);
                    p=p+x+((l-r)/k);

                    if((l-r)%k!=0)
                    {
                        s++;
                        p++;
                    }
                }
                else
                    p=p+x;

                //cout<<p<<endl;
            }
            else
            {
                p=p+x;
            }
        }

        cout<<s<<endl;
    }




    return 0;
}
