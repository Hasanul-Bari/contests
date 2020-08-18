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

    ll a,b,v,w,t;

    cin>>a>>v>>b>>w>>t;

    ll d=abs(a-b);

    ll dc=v-w;

    if(dc<0)
        dc=0;



    if(dc*t>=d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}

