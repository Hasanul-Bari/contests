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


        if(a*b==c)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(a*c==b)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<c<<" "<<b<<endl;
        }
        else if(b*c==a)
        {
            cout<<"YES"<<endl;
            cout<<b<<" "<<c<<" "<<a<<endl;
        }
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
