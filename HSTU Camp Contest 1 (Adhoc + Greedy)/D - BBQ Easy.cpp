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
    n=2*n;
    int a[2*n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int s=0;

    for(int i=0; i<n; i=i+2)
    {
        s=s+a[i];
    }

    cout<<s<<endl;




    return 0;
}
