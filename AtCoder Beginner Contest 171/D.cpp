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

    ll n,x,q,b,c;
    cin>>n;

    map<ll,ll> m;

    ll s=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
        s=s+x;
    }

    cin>>q;

    while(q--)
    {
        cin>>b>>c;

        s=s-(b*m[b]);

        s=s+(c*m[b]);

        m[c]=m[c]+m[b];
        m[b]=0;

        cout<<s<<endl;


    }




    return 0;
}

