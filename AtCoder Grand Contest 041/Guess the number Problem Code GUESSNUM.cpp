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

    ll m,a;

    while(t--)
    {
        cin>>a>>m;

        vector<ll> v;

        for(ll i=1; i<=m; i++)
        {
            ll z=a*i;

            if(z>m)
                break;

            if((m-z)!=0 && i%(m-z)==0)
            {
                //cout<<i<<endl;
                v.pb(i);
            }
        }

        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }




    return 0;
}
