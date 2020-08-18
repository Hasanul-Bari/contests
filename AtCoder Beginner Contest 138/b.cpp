#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    //faster

    int n;
    cin>>n;
    ll a[n],s=0,m=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m=m*a[i];

    }

    for(int i=0; i<n; i++)
    {
        s=s+(m/a[i]);

    }

    //cout<<m/s<<endl;

    double ans=double(m)/double(s);

    printf("%.1000lf\n",ans);



    return 0;
}
