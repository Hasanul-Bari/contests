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


    vector<bool> prime(50000,true);

    vector<ll> p;

    for(ll i=2; i*i<=50000; i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*i; j<=50000; j=j+i)
                prime[j]=false;
        }
    }

    for(ll i=2; i<=50000; i++)
    {
        if(prime[i]==true)
            p.pb(i);
    }


    /*for(int i=0; i<p.size(); i++)
        cout<<p[i]<<endl;*/


    ll t,d;

    cin>>t;

    while(t--)
    {
        cin>>d;

        ll x=d+1;

        int k=lower_bound(p.begin(),p.end(),x)-p.begin();


        ll tg=p[k]+d;

        //cout<<tg<<endl;

        int j=lower_bound(p.begin(),p.end(),tg)-p.begin();

        //cout<<p[k]<<" ** "<<p[j]<<endl;

        cout<<p[j]*p[k]<<endl;
    }






    return 0;
}
