#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,k,m;
    double s=0;
    cin>>n>>k>>m;

    long a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    if(n<m)
    {
        s=s+a[n-1];

        m=m-(n-1);

        if(m>k)
            s=s+k;

        cout<<s<<endl;

    }
    else if(m==n)
    {
        s=
    }
}
