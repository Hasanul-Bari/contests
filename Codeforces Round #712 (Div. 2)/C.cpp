#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(ll tc)
{
    ll n;
    cin>>n;

    ll ans=1;
    ans+=(n*(n-1))/2;

    ll x=0;
    if(n>=4)
    {
        x=n*(n-1)*(n-2)*(n-3);
        //cout<<x<<endl;
        x=x/24;
    }

    ans=ans+x;

    cout<<ans<<endl;

    while(ans%2==0)
    {
        ans=ans/2;
    }

    if(ans==1)
        cout<<"Case "<<tc<<": Yes"<<endl;
    else
        cout<<"Case "<<tc<<": No"<<endl;


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

