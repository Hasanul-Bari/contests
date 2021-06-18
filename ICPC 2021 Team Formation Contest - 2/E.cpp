#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector<ll> primes;
set<ll> s;

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

    //ll c=0;
    for(ll i=0; i<primes.size() && primes[i]*primes[i]<=n ; i++)
    {
        if(n%primes[i]==0)
        {

            //c++;
            //cout<<primes[i]<<" **"<<endl;

            s.insert(primes[i]);

            while(n%primes[i]==0)
            {
                n=n/primes[i];

            }


        }
    }

    if(n>1)
    {
        //cout<<n<<" **"<<endl;

        //c++;

        s.insert(n);
    }


}


int main()
{

    faster

    seive(10000050);

    ll n,a,b;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        primefactor(a);
        primefactor(b);

        cout<<s.size()<<endl;
        s.clear();

    }








    return 0;

}



