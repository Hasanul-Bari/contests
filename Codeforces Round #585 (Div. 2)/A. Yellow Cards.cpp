#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;


    int mx=0,mn=0;

    int r;

    r=((k1-1)*a1)+((k2-1)*a2);

    if(r<n)
        cout<<n-r<<endl;
    else
        cout<<0<<endl;


    if(k1<=k2)
    {
        mx=min(a1,(n/k1));

        n=n-(mx*k1);

        if(n>0)
            mx=min(a2,(n/k2));

    }

    else
    {
        mx=min(a2,(n/k2));
        cout<<mx<<" mx***\n";

        n=n-(mx*k2);
        cout<<n<<" ***\n";
        if(n>0)
            mx=mx+min(a1,(n/k1));
    }

    cout<<mx<<endl;
















    return 0;
}
