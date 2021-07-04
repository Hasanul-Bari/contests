#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;

    ll x,y;

    vector<ll> ng,p;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x<0)
        {
            ng.pb(x);
        }
        else if(x>0)
        {
            p.pb(x);
        }
    }

    if(ng.size()+p.size()<5)
    {
        cout<<0<<endl;
        return;
    }

    sort(ng.begin(),ng.end());
    sort(p.begin(),p.end(),greater<ll>());

    ll ans=1;


    ll i=0,j=0,lp=-1,ln=1;

    for(int k=0; k<5; k++)
    {
        if(i<ng.size() && j<p.size())
        {
            if(abs(ng[i])>abs(p[j]))
            {
                ans=ans*ng[i];

                ln=ng[i];

                i++;


            }
            else
            {

                ans=ans*p[j];

                lp=p[j];

                j++;
            }
        }
        else if(i<ng.size())
        {

            ans=ans*ng[i];

            ln=ng[i];


            i++;
        }
        else
        {

            ans=ans*p[j];

            lp=p[j];

            j++;
        }

    }

    if(ans>0)
    {
        cout<<ans<<endl;
        return;
    }

    ll ans1=0,ans2=0;

    if(i<ng.size() && lp>0)
    {
        ans1=(ans/lp)*ng[i];
    }

    if(j<p.size() && ln<0)
    {
        ans2=(ans/ln)*p[j];
    }


    x=max(ans1,ans2);

    if(x==0 && p.size()+ng.size()==n)
    {
        ans=1;
        int i=0;
        for(int i=0,j=ng.size()-1; i<5 && j>=0; i++,j--)
        {
            ans=ans*ng[j];
        }

        for(int i=0,j=0; i<5 && j<p.size(); i++,j++)
        {
            ans=ans*p[j];
        }

        cout<<ans<<endl;
    }
    else
        cout<<x<<endl;



}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}

