#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    multimap<ll,ll> mm;
    ll dish[n],cost[n];
    for(int i=0; i<n; i++)
    {
        cin>>dish[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>cost[i];
        mm.insert(make_pair(cost[i],dish[i]));
    }
    ll x,y;

    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
    }


}
