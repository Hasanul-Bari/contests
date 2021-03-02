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

        ll xx=(x-1)*20;

        ll zz=((x-1)*5)+((y-1)*5);

        cout<<min(xx,zz)<<endl;
    }






    return 0;
}
