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

    ll n,m=1000;
    cin>>n;

    ll a[n];

    for(ll i=0; i<n; i++)
        cin>>a[i];




    for(ll i=0; i<n; i++)
    {
        //cin>>a[i];

        if(i!=0)
        {
            if(a[i]>a[i-1])
            {

                ll x=m/a[i-1];

                m=m-(a[i-1]*x);

                while(i+1<n && a[i+1]>a[i])
                {
                    i++;
                }

                //cout<<i<<endl;

                //cout<<a[i]<<endl;
                m=m+(a[i]*x);

                //cout<<m<<"  **"<<endl;

            }
        }
        //cout<<i<<endl;
    }

    cout<<m<<endl;



    return 0;
}

