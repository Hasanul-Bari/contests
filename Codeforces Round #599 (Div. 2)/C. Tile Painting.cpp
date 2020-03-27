#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector<ll> v;

void primefactorize(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            //cout<<i<<" ";
            v.pb(i);
        }
    }
    if(n>1)
    {
        //cout<<n<<" ";
        v.pb(n);

    }

}


int main()
{
    faster

    ll n;
    cin>>n;

    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }


    primefactorize(n);

    //cout<<v.size()<<endl;

    if(v.size()>1)
        cout<<1<<endl;
    else
        cout<<v[0]<<endl;



    return 0;
}
