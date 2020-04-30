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

    ll t,x,y,a,b;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>a>>b;

        ll s=abs(x-y),z=min(x,y);

        s=s*a;

        s=s+(z*b);

        ll p=(x+y)*a;

        cout<<min(s,p)<<endl;
    }




    return 0;
}
