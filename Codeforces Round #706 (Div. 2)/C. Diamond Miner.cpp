#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int t,n;
    cin>>t;


    while(t--)
    {
        cin>>n;

        vector<ll> x,y;

        ll xx,yy;

        for(int i=0; i<2*n; i++)
        {
            cin>>xx>>yy;

            if(xx==0)
            {
                y.pb(abs(yy));
            }
            else if(yy==0)
            {
                x.pb(abs(xx));
            }
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        long double s=0.0;

        for(int i=0; i<x.size(); i++)
        {

            //cout<<x[i]<<" --  "<<y[i]<<endl;

            ll z=(x[i]*x[i])+(y[i]*y[i]);

            long double zz=sqrt(z);

            //cout<<z<<" z"<<endl;

            s=s+zz;
        }


        printf("%.15Lf\n",s);


        //cout<<s<<endl;



    }




    return 0;
}

