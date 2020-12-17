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

    int t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        ll x=a/2, y=b/2;

        ll ans=x*y;



        if(a%2!=0)
            x++;

        if(b%2!=0)
            y++;

        ans=ans+(x*y);

        cout<<ans<<endl;

    }





    return 0;
}
