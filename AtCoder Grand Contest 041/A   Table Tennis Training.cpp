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


    ll x=(b-1);

    ll y=n-a;

    ll ans=min(x,y);

    if((b-a)%2==0)
    {
        x=(b-a)/2;

        ans=min(ans,x);
    }


    x=((a-1)*2)+(b-a)+((n-b)*2);
    if(x%2==0)
    {
        ans=min(ans,x/2);
    }
    else
        ans=min(ans,(x+1)/2);




    x=(b-a)+((n-b)*2);
    if(x%2==0)
    {
        ans=min(ans,x/2);
    }
    else
        ans=min(ans,(x+1)/2);




    x=((a-1)*2)+(b-a);
    if(x%2==0)
    {
        ans=min(ans,x/2);
    }
    else
        ans=min(ans,(x+1)/2);






    cout<<ans<<endl;


    return 0;
}
