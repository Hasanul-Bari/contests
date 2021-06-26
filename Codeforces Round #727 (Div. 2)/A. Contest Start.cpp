#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n,t,x;

    cin>>n>>x>>t;

    ll st=min(n-1,t/x);

    //cout<<st<<endl;

    ll rm=n-(st+1);

    cout<<((st*(st+1))/2)+(rm*st)<<endl;
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

