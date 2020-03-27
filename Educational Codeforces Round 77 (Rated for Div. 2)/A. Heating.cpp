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

    ll n,s,c;
    cin>>n;

    while(n--)
    {
        cin>>c>>s;

        if(c>=s)
            cout<<1<<endl;
        else
        {
            ll x=s/c;
            ll y=s%c;

            //cout<<x<<" "<<y<<endl;

            ll ss=((c-y)*(x*x));

            //cout<<ss<<endl;

            x++;

            ss=ss+(y*(x*x));



            cout<<ss<<endl;
        }
    }




    return 0;
}
