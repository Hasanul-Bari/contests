#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector<ll> p;

void primefactorize(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                p.pb(i);
                n=n/i;
            }
        }
    }
    if(n>1)
        p.pb(n);



}


int main()
{
    faster

    int t;
    cin>>t;
    ll n;

    while(t--)
    {
        cin>>n;

        primefactorize(n);

        vector<ll> v;
        for(int i=0; i<p.size(); i++)
        {
            //cout<<p[i]<<" ";
            bool hp=false;

            if(i!=0)
            {
                if(p[i]%v[v.size()-1]==0)
                {
                    v.pb(p[i]);
                }
                else
                {
                    if(i+1<p.size())
                    {
                        p[i+1]=p[i+1]*p[i];
                    }

                }
            }
            else
                v.pb(p[i]);



        }



        vector<ll> v2;

        if(p[p.size()-1]%v[v.size()-1]!=0)
        {
            v[v.size()-1]*=p[p.size()-1];

            for(int i=v.size()-1; i>=0; i--)
            {
                if(i-1>=0)
                {
                    if(v[i]%v[i-1]==0)
                        v2.pb(v[i]);
                    else{
                        v[i-1]=v[i-1]*v[i];

                    }
                }
            }
            v2.pb(v[0]);

            cout<<v.size()<<endl;
            for(int i=v2.size()-1; i>=0; i--)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

        p.clear();

    }






    return 0;
}
