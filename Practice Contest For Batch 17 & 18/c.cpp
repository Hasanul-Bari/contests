#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    long long s;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        s=0;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        for(int i=n-3; i>=0; i=i-3)
        {
            s=s+a[i];
        }

        cout<<s<<endl;
    }
    return 0;
}
