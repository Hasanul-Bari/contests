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

    ll s=0;

    for(int i=0; i<n-1; i++ )
    {
        s=s+a[i];
    }

    if(s<=a[n-1])
        cout<<2*a[n-1]<<endl;
    else
        cout<<s+a[n-1]<<endl;








    return 0;
}


