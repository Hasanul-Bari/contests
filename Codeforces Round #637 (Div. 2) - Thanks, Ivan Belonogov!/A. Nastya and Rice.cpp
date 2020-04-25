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

    int t,n,a,b,c,d;

    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;

        ll x=a-b,y=a+b;



        ll p=c-d,q=c+d;

        x=x*n;
        y=y*n;

        //cout<<p<<" "<<q<<" ** "<<x<<" "<<y<<endl;

        if(p<=x && q>=x)
            cout<<"Yes"<<endl;
        else  if(p<=y && q>=y)
            cout<<"Yes"<<endl;
        else  if(x<=p && y>=p)
            cout<<"Yes"<<endl;
        else  if(x<=q && y>=q)
            cout<<"Yes"<<endl;
        else

            cout<<"No"<<endl;
    }




    return 0;
}
