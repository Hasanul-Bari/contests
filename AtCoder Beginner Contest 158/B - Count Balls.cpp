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

    ll n,a,b;

    cin>>n>>a>>b;

    ll s=a+b;

    ll p=n/s , r=n%s;



    cout<<(p*a)+min(r,a)<<endl;


    return 0;
}

