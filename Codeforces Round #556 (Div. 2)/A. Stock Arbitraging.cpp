#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m,r;
    cin>>n>>m>>r;

    int a[n],b[m];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    int x=a[0];
    int y=b[m-1];

    int z=(r/x)*y;
    z=z+(r%x);

    //cout<<z<<" "<<x<<" "<<y<<endl;

    if(z>r)
        cout<<z<<endl;
    else
        cout<<r<<endl;






    return 0;
}
