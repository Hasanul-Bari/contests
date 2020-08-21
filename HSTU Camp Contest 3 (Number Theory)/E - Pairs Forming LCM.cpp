#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector<ll> primes;

void seive(ll n)
{
    vector<bool> prime(n,true);

    for(ll i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            //primes.pb(i);
            for(int j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }

    for(long long i=2; i<=n; i++)
    {
        if(prime[i]==true)
            primes.pb(i);
    }




}



void primefactor(ll n)
{
    ll s=1;

    for(ll i=0; i<primes.size() && primes[i]*primes[i]<=n ; i++)
    {
        if(n%primes[i]==0)
        {
            ll c=0;

            while(n%primes[i]==0)
            {
                n=n/primes[i];
                c++;
            }

            s=s*(2*c+1);
        }
    }

    if(n>1)
    {
        s=s*3;
    }

    cout<<(s+1)/2<<endl;
}


int main()
{
    faster

    int t,k=1;
    cin>>t;

    seive(10001000);

    //cout<<primes.size()<<endl;

    ll n;

    while(t--)
    {
        cin>>n;

        cout<<"Case "<<k<<": ";
        primefactor(n);
        k++;
    }




    return 0;
}
