#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long s,m,d,k;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>s>>m;
        if(s<m)
            swap(s,m);

        d=s-m;

        if(d==0)
            cout<<0<<endl;
        else
        k=d%2;
        cout<<k<<endl;



    }
}
