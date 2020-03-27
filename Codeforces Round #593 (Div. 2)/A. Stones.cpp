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
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        int x=min(b,c/2);
        b=b-x;

        x=x+(x*2);

        int y=min(a,b/2);

        y=y+(y*2);

        cout<<x+y<<endl;
    }




    return 0;
}
