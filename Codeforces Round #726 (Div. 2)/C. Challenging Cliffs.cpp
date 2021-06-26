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

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    ll d;

    ll l,r,li;

    for(int i=1; i<n; i++)
    {
        if(i==1)
        {
            d=a[i]-a[i-1];
            l=a[i-1];
            r=a[i];

            li=i;

        }
        if(a[i]-a[i-1]<d)
        {
            l=a[i-1];
            r=a[i];
            d=a[i]-a[i-1];

            li=i;
        }
    }

    a[li-1]=-1;
    a[li]=-1;




    cout<<l<<" ";

    for(int i=li+1 ; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    for(int i=0 ; i<li-1; i++)
    {
        cout<<a[i]<<" ";
    }



    cout<<r<<endl;
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

