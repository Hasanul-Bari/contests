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

    int c=0,cc=0;
    int p,q;
    cin>>p>>q;
    for(int i=100; i<=200; i++)
    {
        ll x=(i%p)%q, y=(i%q)%p;
        cout<<i<<" mod "<<p<<" mod "<<q<<" = "<<x<<" --- "<<" mod "<<q<<" mod "<<p<<" = "<<y<<endl;

        if(x == y)
            cout<<"hp"<<endl,cc++;
        else
            c++;
    }
    cout<<c<<" "<<cc<<endl;




    return 0;
}
