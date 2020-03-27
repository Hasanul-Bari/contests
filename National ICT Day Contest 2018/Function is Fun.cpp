#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int k;
        cin>>k;
        cout<<a[k]<<endl;
    }
    return 0;
}
