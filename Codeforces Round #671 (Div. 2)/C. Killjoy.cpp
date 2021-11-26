#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

//author: Hasanul Bari

void solve(int tc)
{
    ll n,x,a;
    cin>>n>>x;

    ll s=0,e=0;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        s+=a;

        if(a==x)
            e++;

    }

    if(e==n)
    {
        cout<<0<<endl;
    }
    else if(s==x*n || e>=1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }



}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


