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

    ll n,x=0;
    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        x=x^a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<(a[i]^x)<<" ";
    }
    cout<<endl;




    return 0;
}

