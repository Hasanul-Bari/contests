#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    ll n;
    cin>>n;
    if(n%2==0)
    {
        ll x=n/2;
        ll s=1;
        for(ll  i=1; i<=x; i++)
        {
            s=s*2;
        }
        cout<<s<<endl;
    }
    else
        cout<<0<<endl;





    return 0;
}
