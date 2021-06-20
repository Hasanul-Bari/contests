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

    ll t,n,m,x;


    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        map<ll,ll> mm;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            ll r=x%m;

            if(r==0)
                r=m;

            mm[r]++;
        }



        ll c=0;
        for(int i=1; i<=(m/2); i++)
        {
            ll x=mm[i];
            ll y=mm[m-i];

            //cout<<mm[i]<<" -- "<<mm[m-i]<<endl;


            if(mm[i]>0 && mm[m-i]>0)
            {

                if(i!=m-i)
                {
                    if(x==y)
                    {
                        c++;
                    }
                    else
                    {
                        ll mn=min(x,y);

                        ll rm=(x+y)-(mn+mn+1);

                        //cout<<rm<<" rm"<<endl;

                        c=c+rm+1;

                    }

                }
                else
                    c++;

            }
            else if(mm[i]>0)
                c=c+mm[i];
            else if(mm[m-i]>0)
                c=c+mm[m-i];

            //cout<<c<<" c"<<endl;
        }

        //cout<<c<<endl;

        if(mm[m]>0)
            c++;


        cout<<c<<endl;
    }




    return 0;
}

/*
for(auto x : mm)
        {
            cout<<x.first<<" ** "<<x.second<<endl;
        }*/
