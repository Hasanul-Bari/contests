#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int a[n],ss[n];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
            ss[i]=a[i];
        else
            ss[i]=ss[i-1]+a[i];


    }


    int q,l,r,ans;
    cin>>q;

    while(q--)
    {
        cin>>l>>r;
        l--;
        r--;
        if(l-1>=0)
            ans=ss[r]-ss[l-1];
        else
            ans=ss[r];


       cout<<ans/10<<endl;

    }




    return 0;
}
