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

    ll m;
    cin>>m;

    ll a[m];
    ll s=0;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);



    for(ll i=0,j=1; i<m; i++,j++)
    {
        if(a[i]>j)
        {
            ll xx=min(m,a[i]);

            ll x=xx-j;

            //cout<<"x = "<<x<<endl;

            x=min(x,m);

            //cout<<x<<endl;

            s=s+(2*x);
        }
    }

    cout<<s<<endl;




    return 0;
}
