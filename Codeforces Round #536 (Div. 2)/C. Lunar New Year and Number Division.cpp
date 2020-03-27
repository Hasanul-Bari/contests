#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    long long ans=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);


    for(int i=0,j=n-1; i<n/2; i++,j--)
    {
        s=a[i]+a[j];
        ans=ans+(s*s);
    }

    cout<<ans<<endl;
    return 0;
}
