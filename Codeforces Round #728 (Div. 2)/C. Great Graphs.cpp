#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n;
    cin>>n;

    ll d[n];


    for(int i=0; i<n; i++)
    {
        cin>>d[i];
    }

    sort(d,d+n);

    if(n<=2)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        ll ans=0;



        for(ll i=1,j=0; i<n; i++,j++)
        {
            ll x=d[i]-d[i-1];

            ans=ans+x;

            ans=ans-(x*(n-1-j)*(j+1));



        }

        cout<<ans<<endl;
    }



}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

