#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

ll phi(ll n)
{
    ll ans=n;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }

            ans=ans-(ans/i);
        }
    }
    if(n>1)
        ans=ans-(ans/n);

    return ans;
}




int main()
{
    faster

    int t;
    ll a,m;

    cin>>t;

    while(t--)
    {
        cin>>a>>m;

        ll x=gcd(a,m);

        cout<<phi(m/x)<<endl;

    }




    return 0;
}
