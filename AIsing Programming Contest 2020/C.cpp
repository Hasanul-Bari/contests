#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

/*ll fun2(ll x, ll y)
{
    return (3*x*x)+(y*y)+(2*x*y);
}*/

ll fun(ll x,ll y,ll z)
{
    return (x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(z*x);
}




int main()
{
    faster

    int n;


    map<ll,ll> m;




    for(ll i=1; i<=100; i++)
    {
        for(ll j=1; j<=100; j++)
        {

            for(ll k=1; k<=100; k++)
            {
                //cout<<i<<" ** "<<j<<" ** "<<k<<" - "<<fun(i,j,k)<<endl;

                ll x=fun(i,j,k);

                m[x]++;

                /*if(i==j && j==k)
                    m[x]=m[x]+1;
                else if(i==j || j==k || i==k)
                    m[x]=m[x]+3;
                else
                    m[x]=m[x]+6;*/
            }



        }

    }


    /*for(ll i=1; i<=1000; i++)
    {
        for(ll j=1; j<=1000; j++)
        {
            //cout<<i<<" ** "<<j<<" - "<<fun(i,j)<<endl;

            ll x=fun2(i,j);

            if(i==j)
                m[x]=1;
            else
                m[x]=3;
        }

    }*/




    cin>>n;

    for(ll i=1; i<=n; i++)
    {
        cout<<m[i]<<endl;
    }




    return 0;
}
