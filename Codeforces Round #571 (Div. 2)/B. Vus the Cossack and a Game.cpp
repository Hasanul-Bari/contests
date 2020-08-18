#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m;
    cin>>n>>m;

    if(n>m)
        swap(n,m);

    int x=ceil(m/2.0);
    cout<<x<<endl;

    int ans=0;

    if(n%3==2)
    {
        ans=ans+((n+1)/3)*x;
    }
    else if(n%3==0)
    {
        int y=n/3;
        y--;
        int p=m/3;
        if(m%3==2)
            p++;


        ans=ans+(y*x)+(2*p);
    }
    else if(n%3==1)
    {
        int y=n/3;

        int p=m/3;
        if(m%3==2)
            p++;

        ans=ans+(y*x)+p;
    }

    cout<<ans<<endl;









    return 0;
}
