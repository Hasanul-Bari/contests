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

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    ll c[n+1];

    c[0]=0;

    for(int i=1; i<=n; i++)
    {
        c[i]=c[i-1]+a[i-1];
    }

    int q,i,j;
    cin>>q;

    while(q--)
    {
        cin>>i>>j;

        int p=lower_bound(a,a+n,i)-a;
        int q=upper_bound(a,a+n,j)-a;

        //q--;

        //cout<<p<<" ** "<<q<<endl;

        cout<<c[q]-c[p]<<endl;
    }








    return 0;
}
