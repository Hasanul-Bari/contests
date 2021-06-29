#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n;
    cin>>n;

    ll a[n];

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll c=0;

    for(ll i=1; i<n; i++)
    {
        while(a[i-1]>=a[i])
        {
            a[i]++;

            if(a[i]==10 || a[i]==100 || a[i]==1000)
            {
                c++;
            }
        }
        cout<<a[i]<<endl;
    }

    cout<<"Case #"<<tc<<": "<<c<<endl;
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


