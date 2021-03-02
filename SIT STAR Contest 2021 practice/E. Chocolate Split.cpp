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

    int t;
    cin>>t;

    ll n;

    while(t--)
    {
        cin>>n;

        if(n%2==0)
        {
            ll x=n/2;
            x++;
            cout<<x*x<<endl;
        }
        else
        {
            ll x=n/2;

            cout<<(x+2)*(x+1)<<endl;
        }

    }




    return 0;
}


