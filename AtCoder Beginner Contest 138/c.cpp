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
    double a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=1; i<n; i++)
    {
        a[i]=(a[i]+a[i-1])/2.0;

    }

    //cout<<a[n-1]<<endl;
    printf("%lf\n",a[n-1]);




    return 0;
}
