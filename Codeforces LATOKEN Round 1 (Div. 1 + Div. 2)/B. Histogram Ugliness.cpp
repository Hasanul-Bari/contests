#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;

    ll a[n];

    ll s=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        ll l,r;

        if(i-1<0)
        {
            l=0;
        }
        else
        {
            l=a[i-1];
        }

        if(i+1==n)
        {
            r=0;
        }
        else
        {
            r=a[i+1];
        }



        if(a[i]>l && a[i]>r)
        {
            s=s+(a[i]-max(l,r));

            a[i]=max(l,r);
        }


    }

    s=s+a[0]+a[n-1];

    for(int i=1; i<n; i++)
    {
        s=s+abs(a[i]-a[i-1]);
    }



    cout<<s<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

