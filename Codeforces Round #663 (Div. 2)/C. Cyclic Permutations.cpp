#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


ll bigmod(ll a,ll b, ll m )
{
    ll x;

    if(b==0)
        return 1;

    x=bigmod(a,b/2,m);
    x=(x*x)%m;

    if(b%2!=0)
        x=(x*a)%m;
    //cout<<a<<" "<<b<<" "<<m<<endl;
    //cout<<x<<" ~ "<<endl;
    return x;
}


int main()
{
    faster

    ll n,md=1000000007;

    cin>>n;

    ll f=1;

    for(ll i=1; i<=n; i++)
    {
        f=(f*i)%md;
    }

    ll x=bigmod(2,n-1,md);


    //cout<<f<<" "<<x<<endl;

    if(f>=x)
        cout<<(f-x)%md<<endl;
    else
    {
        cout<<(f+md-x)%md<<endl;
    }







    return 0;
}


