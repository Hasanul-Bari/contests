#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int c=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<m)
        {
            c=1;
            break;
        }
    }
    if(c==0 && n*m==60)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
