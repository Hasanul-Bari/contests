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

    ll n,m;
    cin>>n>>m;

    if(m==0)
    {
        cout<<1<<endl;
        return 0;
    }

    ll a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];

    sort(a,a+m);

    vector<int> v;

    ll mn;

    if(a[0]!=1)
    {
        v.pb(a[0]-1);
    }

    for(int i=1; i<m; i++)
    {
        if(a[i]-(a[i-1]+1)!=0)
            v.pb(a[i]-(a[i-1]+1));
    }

    if(a[m-1]!=n)
    {
        v.pb(n-a[m-1]);
    }

    //cout<<v.size()<<endl;
    if(v.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }

    sort(v.begin(),v.end());

    mn=v[0];

    ll ans=0;

    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i]<<" ";
        ans=ans+(v[i]/mn);

        if(v[i]%mn!=0)
            ans++;
    }

    cout<<ans<<endl;







    return 0;
}
