#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

ll fun(ll r,ll b,ll lcm)
{
    ll ss=0;
    ss=min(r,b-1);
    //cout<<"ss "<<ss<<endl;


    ll c=0;
    if(r>=lcm)
    {
        c=((r/lcm)-1)*b;

        //cout<<"c "<<c<<endl;


        ll z=(r/lcm)*lcm;
        ll x=min(z+b-1,r);
        //cout<<x<<" "<<z<<endl;
        c=c+(x-z)+1;
    }





    //cout<<c<<" ----- "<<ss<<endl;

    //cout<<c+ss<<endl;

    return c+ss;
}


int main()
{
    faster

    ll t,a,b,q,l,r;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>q;

        ll lcm=(a*b)/gcd(a,b);

        if(a>b)
            swap(a,b);

        //cout<<lcm<<" lcm"<<endl;


        while(q--)
        {
            cin>>l>>r;


            if(lcm==b)
                cout<<0<<" ";
            else
            {

                ll p=0;
                if(l!=1)
                    p=fun(l-1,b,lcm);

                ll q=fun(r,b,lcm);

                //cout<<q-p<<endl;
                ll z=q-p;
                //cout<<p<<" ****** "<<q<<endl<<endl;

                cout<<(r-l+1)-z<<" ";


            }


        }
        cout<<endl;
    }




    return 0;
}

