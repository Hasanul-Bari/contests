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

    int t0,t1,t2;
    cin>>t0>>t1>>t2;

    if(t1>t2)
        swap(t1,t2);

    if(t1>=t0)
    {
        cout<<abs(t1-t0)+abs(t2-t1)<<endl;
    }
    else if(t2<=t0)
    {
        cout<<abs(t0-t2)+abs(t2-t1)<<endl;
    }
    else
    {
        int x=abs(t0-t1);
        int y=abs(t2-t0);

        cout<<min(x,y)*2+max(x,y)<<endl;

    }





    return 0;
}


