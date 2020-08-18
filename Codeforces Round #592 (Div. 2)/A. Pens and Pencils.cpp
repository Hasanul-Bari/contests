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
    int t,a,b,c,d,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;

        double x=ceil(double(a)/double(c));
        double y=ceil(double(b)/double(d));

        int z=int(x)+int(y);

        if(z<=k)
            cout<<x<<" "<<y<<endl;
        else
            cout<<-1<<endl;

    }




    return 0;
}
