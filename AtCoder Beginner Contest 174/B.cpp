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

    int n,c=0;

    double d,x,y;

    cin>>n>>d;

    while(n--)
    {
        cin>>x>>y;




        double z=sqrt((x*x)+(y*y));

        //cout<<z<<endl;

        if(z<=d)
            c++;

    }

    cout<<c<<endl;




    return 0;
}
