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

    ll n,x,t;
    cin>>n>>x>>t;

    if(n%x==0)
        x=n/x;
    else
        x=(n/x)+1;

    cout<<x*t<<endl;




    return 0;
}
