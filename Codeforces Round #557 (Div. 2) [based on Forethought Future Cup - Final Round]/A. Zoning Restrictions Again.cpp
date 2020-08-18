#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m,h,l,r,x;
    cin>>n>>h>>m;

    int a[n+1];

    for(int i=1; i<=n; i++)
        a[i]=h;

    for(int i=0; i<m; i++)
    {
        cin>>l>>r>>x;
        for(int j=l; j<=r; j++)
        {
            if(a[j]>x)
                a[j]=x;
        }
    }

    ll s=0;

    for(int i=1; i<=n; i++)
    {
        s=s+(a[i]*a[i]);
        //cout<<a[i]<<endl;
    }

    cout<<s<<endl;




    return 0;
}
