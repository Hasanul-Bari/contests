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

    int t,x,y;
    cin>>t;

    while(t--)
    {
        cin>>x>>y;

        if(abs(x-y)<=1)
            cout<<x+y<<endl;
        else
        {
            int mn=min(x,y),mx=max(x,y);

            cout<<(mn*2)+(mx-mn)+(mx-mn-1)<<endl;
        }
    }




    return 0;
}
