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
    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        while(1)
        {
            ll sd=0;
            ll x=n;
            while(x>0)
            {
                sd=sd+(x%10);
                x=x/10;
            }

            if(gcd(n,sd)>1)
            {
                //cout<<i<<" "<<xx<<endl;
                cout<<n<<endl;
                break;
            }
            n++;
        }


    }




    return 0;
}
