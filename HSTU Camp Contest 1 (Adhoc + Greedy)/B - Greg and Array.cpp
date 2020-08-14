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

    int n,m,k;

    cin>>n>>m>>k;

    ll a[n+1],dif[n+1];
    a[0]=0;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

        dif[i-1]=a[i]-a[i-1];
    }
    dif[n]=-a[n];


    int l[m+1],r[m+1];
    ll x[m+1],diff[m+1],op[m+1];

    for(int i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i]>>x[i];
        diff[i]=0;
        op[i]=0;
    }
    diff[0]=0;
    op[0]=0;

    int lll,rr;
    while(k--)
    {
        cin>>lll>>rr;

        diff[lll-1]++;
        diff[rr]--;
    }


    for(int i=1; i<=m; i++)
    {
        op[i]=diff[i-1]+op[i-1];

        //cout<<op[i]<<" ";

        dif[l[i]-1]=dif[l[i]-1]+(x[i]*op[i]);
        dif[r[i]]=dif[r[i]]-(x[i]*op[i]);

    }

    for(int i=1; i<=n; i++)
    {
        a[i]=dif[i-1]+a[i-1];

        cout<<a[i]<<" ";
    }
    cout<<endl;




    return 0;
}
