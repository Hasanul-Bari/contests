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

    int t;
    cin>>t;

    ll n,k;

    while(t--)
    {
        cin>>n>>k;

        if(n%2==0)
        {
            ll p=k%n;
            if(k%n==0)
                p=n;

            cout<<p<<endl;
        }
        else
        {
            ll m=n/2;

            if(k<=m)
            {
                cout<<k<<endl;
            }
            else
            {
                ll r=k/m;
                if(k%m==0)
                    r--;

                //cout<<r<<" r"<<endl;

                k=k+r;

                ll p=k%n;
                if(k%n==0)
                    p=n;

                cout<<p<<endl;

            }



        }
    }




    return 0;
}
