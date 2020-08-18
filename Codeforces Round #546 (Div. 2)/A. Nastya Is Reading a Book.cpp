#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int k,c=0;
    cin>>k;
    for(int i=1; i<=n; i++ )
    {
        if(b[i]<k)
            c++;
    }
    cout<<n-c<<endl;


    return 0;
}

