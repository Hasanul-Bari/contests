#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int r=k-1;
    int l=n-k;
    //cout<<r<<" "<<l<<endl;

    int ans=0;

    if(r<=l)
    {
        ans=r*2;
        ans=ans+l;
        ans=ans+(n+1);
        ans=ans+n;
        cout<<ans<<endl;
    }
    else
    {
        ans=l*2;
        ans=ans+r;
        ans=ans+(n+1);
        ans=ans+n;
        cout<<ans<<endl;
    }



    return 0;
}
