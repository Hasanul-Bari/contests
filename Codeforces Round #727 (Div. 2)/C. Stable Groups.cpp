#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n,k,x;
    cin>>n>>k>>x;

    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);


    vector<ll> v;

    ll g=1;

    for(int i=1; i<n; i++)
    {
        if(a[i]-a[i-1]>x)
        {
            ll r=(a[i]-a[i-1])/x;

            if((a[i]-a[i-1])%x==0)
                r--;

            v.pb(r);
            g++;
        }
    }

    sort(v.begin(),v.end());

    //cout<<g<<endl;

    /*for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;*/

    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>k)
        {
            break;
        }
        else
        {
            g--;
            k=k-v[i];
        }
    }

    cout<<g<<endl;
}


int main()
{
    faster

    //int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

