#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll x,s=0,mx=0;

        int nn=n;
        while(nn--)
        {
            cin>>x;
            s=s+x;

            mx=max(mx,x);
        }

        ll r=s-mx;

        if(s%(n-1)==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll rq=s%(n-1);
            rq=(n-1)-rq;

            cout<<rq<<endl;
        }
    }




    return 0;
}
