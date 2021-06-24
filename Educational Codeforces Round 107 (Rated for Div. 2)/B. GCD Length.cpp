#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll a,b,c;

    ll aa=1, bb=1;
    cin>>a>>b>>c;


    for(ll i=1; i<a; i++ )
    {
        aa=aa*10;
    }

    for(ll i=1; i<b; i++ )
    {
        bb=bb*10;
    }

    //cout<<aa<<" "<<bb<<endl;

    ll mn=min(aa,bb);
    ll mx=max(aa,bb);

    string s=to_string(mn);

    ll r=s.length()-c;

    //cout<<r<<endl;

    for(int i=1; i<=r; i++)
    {
        s[i]='1';
    }

    if(s.length()==a)
    {
        cout<<s<<" "<<mx<<endl;
    }
    else
    {
        cout<<mx<<" "<<s<<endl;
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

