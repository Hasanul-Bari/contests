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

    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll s=0;

    for(int i=0; i<k; i++)
        s=s+a[i];

    cout<<s<<endl;






    return 0;
}
