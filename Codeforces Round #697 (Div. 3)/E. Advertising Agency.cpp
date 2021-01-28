#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll md=1000000007;

ll ncr(ll n, ll k)
{
    ll c[n+1][k+1];
    for(long long i=0; i<=n; i++)
    {
        for(ll j=0; j<=min(i,k); j++)
        {
            if(j==0 || j==i)
                c[i][j]=1;
            else
                c[i][j]=((c[i-1][j-1]%md)+(c[i-1][j]%md))%md ;
        }
    }


    return c[n][k];
}

int main()
{
    faster


    int t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll l=0,r=0;

        for(int i=n-k; i<n; i++)
        {
            if(a[i]==a[n-k])
                r++;
            else
                break;
        }

        for(int i=n-k-1; i>=0; i--)
        {
            if(a[i]==a[n-k])
                l++;
            else
                break;
        }

        //cout<<l<<" ** "<<r<<endl;

        cout<<ncr(l+r,r)<<endl;





    }




    return 0;
}

