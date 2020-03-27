#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll p=a[0];

    for(int i=1; i<n; i++)
    {
        p=a[i]-p;
    }

    cout<<p<<endl;

    if(p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
