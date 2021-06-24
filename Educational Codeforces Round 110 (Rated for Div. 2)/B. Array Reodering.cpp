#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;





void solve(int tc)
{
    int n;

    cin>>n;
    ll ans=0,c=n-1;


    ll a[n];

    vector<ll> v;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            ans=ans+c;
            c--;
        }
        else
        {
            v.pb(a[i]);

        }

    }




    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(__gcd(v[i],2*v[j])>1)
                ans++;
        }
    }

    //cout<<ans<<endl;





    cout<<ans<<endl;




}


int main()
{
    faster


    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

