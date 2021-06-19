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

    ll t,x;
    cin>>t;

    map<ll,bool> m;

    for(ll i=1; i<=10000; i++)
    {
        ll x=i*i*i;
        //cout<<x<<endl;
        m[x]=true;
    }

    while(t--)
    {
        cin>>x;

        bool f=false;

        for(ll i=1; i*i*i<=x; i++)
        {
            ll zx=i*i*i;

            if(m[x-zx]==true)
            {
                cout<<"YES"<<endl;
                f=true;
                break;

            }

        }
        if(f==false)
            cout<<"NO"<<endl;



    }








    return 0;

}


