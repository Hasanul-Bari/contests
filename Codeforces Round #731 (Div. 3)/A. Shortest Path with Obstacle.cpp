#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int xa,xb,xf,ya,yb,yf;

    cin>>xa>>ya>>xb>>yb>>xf>>yf;

    if(xa==xb && xa==xf)
    {
        if(yf>min(ya,yb) && yf<max(ya,yb))
        {
            cout<<abs(ya-yb)+2<<endl;
        }
        else
        {
            cout<<abs(ya-yb)<<endl;
        }
    }
    else if(ya==yb && ya==yf)
    {
        if(xf>min(xa,xb) && xf<max(xa,xb))
        {
            cout<<abs(xa-xb)+2<<endl;
        }
        else
        {
            cout<<abs(xa-xb)<<endl;
        }
    }
    else
    {
        cout<<abs(xa-xb)+abs(ya-yb)<<endl;
    }

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


