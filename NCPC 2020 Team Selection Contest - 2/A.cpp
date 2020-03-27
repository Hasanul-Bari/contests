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

    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        ll src,des,str[n],d,en[n];
        for(ll i=0; i<n; i++)
        {
            cin>>src>>des>>str[i]>>d;
            en[i]=str[i]+d-1;
        }

        ll x,y,c=0;

        while(m--)
        {
            cin>>x>>y;

            y=x+y-1;

            c=0;

            //cout<<x<<" ** "<<y<<endl;

            for(ll i=0; i<n; i++)
            {
                //cout<<x<<" **"<<str[i]<<" "<<en[i]<<" **"<<y<<endl;

                if(x>=str[i] && y<=en[i])
                    c++;
                else if(x<=str[i] && y>=str[i])
                    c++;
                else if(x<=en[i] && y>=en[i])
                    c++;




            }

            cout<<c<<endl;
        }



    }









    return 0;
}
