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

    int t,x,y,n;
    cin>>t;


    while(t--)
    {
        cin>>x>>y>>n;

        int r=n%x;

        if(y<=r)
        {
            r=r-y;
            cout<<n-r<<endl;
        }
        else
        {
            //cout<<r<<endl;
            cout<<n-(r+(x-y))<<endl;
        }
    }




    return 0;
}
