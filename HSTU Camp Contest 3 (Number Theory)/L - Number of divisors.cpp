#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void primefactor(ll n)
{
    ll d=1;
    for(ll i=2; i*i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll c=0;
            while(n%i==0)
            {
                n=n/i;
                c++;
            }
            d=d*(c+1);
        }
    }

    cout<<n<<endl;
}


int main()
{
    faster
    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        primefactor(n);

    }




    return 0;
}
