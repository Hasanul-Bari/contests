#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    faster

    ll a,b;
    cin>>a>>b;

    cout<<(a*b)/gcd(a,b)<<endl;




    return 0;
}
