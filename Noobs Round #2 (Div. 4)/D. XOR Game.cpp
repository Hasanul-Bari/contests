#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll convert(ll n)
{
    ll b=0;
    ll r,i=1;

    while (n!=0)
    {
        r=n%2;
        n=n/2;
        b=b+(r*i);
        i=i*10;
    }
    return b;
}


int main()
{
    faster

    int t;
    ll a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        ll x=convert(a);
        ll y=convert(b);

        cout<<x<<" ** "<<y<<endl;

        bool hp=false;

        while(x!=0 && y!=0)
        {
            int i=x%10, j=y%10;

            cout<<i<<" "<<j<<endl;


            if(i==1 && j==1)
            {
                hp=true;
                break;
            }

            if(i==0 && j==0 && x/10>0)
            {
                hp=true;
                break;
            }

            x=x/10;
            y=y/10;


        }

        if(hp==true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }








    return 0;
}
