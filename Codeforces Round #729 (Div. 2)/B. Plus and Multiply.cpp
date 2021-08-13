#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n,a,b;

    cin>>n>>a>>b;

    if(a==1)
    {
        if((n-1)%b==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

        return;
    }

    ll x=1;

    while(x<=n)
    {
        ll r=n-x;

        if(r%b==0)
        {
            cout<<"Yes"<<endl;
            return;
        }

        x=x*a;
    }

    cout<<"No"<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


