#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n,m,i,j;
    cin>>n>>m>>i>>j;

    ll x1,x2,y1,y2;

    if(i-1>=n-i)
    {
        x1=1;
        if(j-1>=m-j)
        {
            y1=1;
        }
        else
        {
            y1=m;
        }

    }
    else
    {
        x1=n;
        if(j-1>=m-j)
        {
            y1=1;
        }
        else
        {
            y1=m;
        }
    }

    cout<<x1<<" "<<y1<<" ";


    if(x1==1 && y1==1)
        cout<<n<<" "<<m<<endl;
    else if(x1==1 && y1==m)
        cout<<n<<" "<<1<<endl;
    else if(x1==n && y1==1)
        cout<<1<<" "<<m<<endl;
    else if(x1==n && y1==m)
        cout<<1<<" "<<1<<endl;




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

