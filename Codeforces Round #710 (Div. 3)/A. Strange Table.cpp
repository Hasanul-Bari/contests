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

    ll n,m,x;

    while(t--)
    {
        cin>>n>>m>>x;

        ll c=x/n;
        if(x%n!=0)
            c++;

        ll r=x%n;
        if(r==0)
            r=n;

        ll ans=((r-1)*m)+c;

        cout<<ans<<endl;


    }




    return 0;
}
