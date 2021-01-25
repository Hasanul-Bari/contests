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

    int t,a,b,x,y,n;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>x>>y>>n;



        ll ma=max(x,a-n);
        ll mb=max(y,b-n);

        if(ma>=mb)
        {
            n=n-(b-mb);

            ma=max(x,a-n);
        }
        else
        {
            n=n-(a-ma);

            mb=max(y,b-n);
        }

        cout<<ma*mb<<endl;
    }




    return 0;
}
