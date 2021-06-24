#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    bool f=true;

    int n,x,mx=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(x<0)
        {
            f=false;
        }

        mx=max(mx,x);

    }

    if(f==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<mx+1<<endl;;

        for(int i=0; i<=mx; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
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

