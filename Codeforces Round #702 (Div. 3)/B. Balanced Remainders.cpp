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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        int c0=0,c1=0,c2=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]%3==0)
                c0++;
            else if(a[i]%3==1)
                c1++;
            else
                c2++;
        }

        int tr=n/3,ans=0;

        //cout<<c0<<" "<<c1<<"  ** "<<c2<<endl;

        int cg;
        if(c0<tr)
        {
            int ct=tr-c0;

            if(c2>tr)
            {
                cg=min(ct,c2-tr);
                ct=ct-cg;
                c2=c2-cg;
                ans=ans+cg;
            }

            if(c1>tr)
            {

                cg=min(ct,c1-tr);
                ct=ct-cg;
                c1=c1-cg;
                ans=ans+(cg*2);

            }

            c0=tr;

        }

        //cout<<ans<<" ans1"<<endl;

        if(c1<tr)
        {
            int ct=tr-c1;

            if(c0>tr)
            {

                 cg=min(ct,c0-tr);
                ct=ct-cg;
                c0=c0-cg;
                ans=ans+cg;

            }

            if(c2>tr)
            {

                cg=min(ct,c2-tr);
                ct=ct-cg;
                c2=c2-cg;
                ans=ans+(cg*2);

            }

            c1=tr;

        }

        if(c2<tr)
        {
            int ct=tr-c2;

            if(c1>tr)
            {

                 cg=min(ct,c1-tr);
                ct=ct-cg;
                c1=c1-cg;
                ans=ans+cg;

            }

            if(c0>tr)
            {

                cg=min(ct,c0-tr);
                ct=ct-cg;
                c0=c0-cg;
                ans=ans+(cg*2);

            }

            c2=tr;

        }


        cout<<ans<<endl;




    }




    return 0;
}

