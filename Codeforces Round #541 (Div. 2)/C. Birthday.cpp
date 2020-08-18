#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=0; i<n; i=i+2)
        cout<<a[i]<<" ";

    if(n%2==0)
    {
        for(int i=n-1; i>=0; i=i-2)
            cout<<a[i]<<" ";
    }
    else
    {
        for(int i=n-2; i>=0; i=i-2)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
