#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll md=1000000007;
ll c[200009][102];

void binomial_coefficient(ll n, ll k)
{

    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=min(i,k); j++)
        {
            if(j==0 || j==i)
                c[i][j]=1;
            else
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%md;
        }
    }

}

int main()
{
    faster

    binomial_coefficient(200009,102);

    int t,n;
    cin>>t;

    ll m,k;

    while(t--)
    {
        cin>>n>>m>>k;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll s=0;

        for(int i=0; i<n; i++)
        {
            ll x=a[i]+k;

            ll j=upper_bound(a,a+n,x)-a;
            j--;

            ll e=j-i;

            //cout<<a[i]<<" "<<e<<endl;



            if(e>=m-1)
            {
                s=((s%md)+(c[e][m-1]%md))%md;
            }
        }

        cout<<s<<endl;




    }




    return 0;
}

