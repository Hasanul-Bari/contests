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
    cin>>t;

    ll n,k;

    while(t--)
    {
        cin>>n>>k;

        ll ans=(n/k)*k;

        ll z=n%k,x=k/2;

        ans=ans+min(z,x);

        cout<<ans<<endl;


    }




    return 0;
}
