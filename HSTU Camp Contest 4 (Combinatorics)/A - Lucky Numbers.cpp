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

    ll n;
    cin>>n;

    ll ans[n+1],add=2;

    ans[1]=2;

    for(ll i=2; i<=n; i++)
    {
        add=add*2;
        ans[i]=ans[i-1]+add;
    }

    cout<<ans[n]<<endl;




    return 0;
}
