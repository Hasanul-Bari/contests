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

    ll t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;

        ll a[n],b[n],r[n];


        ll s=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];

            if(i!=0)
            {
                if(b[i-1]<a[i])
                {

                    r[i]=a[i]-b[i-1];

                }
                else
                    r[i]=0;

                s=s+r[i];

            }

        }
        if(b[n-1]<a[0])
        {

            r[0]=a[0]-b[n-1];

        }
        else
            r[0]=0;

        s=s+r[0];



        ll x,mn;
        for(int i=0; i<n; i++)
        {
            //cout<<r[i]<<" ";

            x=s-r[i]+a[i];

            //cout<<x<<" ";

            if(i==0)
                mn=x;
            else if(mn>x)
                mn=x;
        }
        //cout<<endl;

        cout<<mn<<endl;







    }




    return 0;
}
