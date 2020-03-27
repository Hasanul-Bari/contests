#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

ll bigmod(ll a,ll b,ll m )
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
    int x,y;
    cin>>x>>y;

    cout<<bigmod(2,(x+y),998244353)<<endl;






    return 0;
}
