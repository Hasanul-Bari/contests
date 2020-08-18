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

    ll n,m,k;
    cin>>n>>m>>k;

    ll a[n],b[m];

    vector<ll> va,vb;
    ll c=0,onea=0,oneb=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c++,onea++;
        else
        {
            if(c!=0)
                va.pb(c);

            c=0;
        }
    }
    if(c!=0)
        va.pb(c);

    c=0;
    for(int i=0; i<m; i++)
    {
        cin>>b[i];

        if(b[i]==1)
            c++,oneb;
        else
        {
            if(c!=0)
                vb.pb(c);

            c=0;
        }
    }
    if(c!=0)
        vb.pb(c);


    /*for(int i=0; i<va.size(); i++)
        cout<<va[i]<<" aa ";
    cout<<endl;*/


    ll s=0;
    for(int i=0; i<vb.size(); i++)
    {
        //cout<<vb[i]<<" bb ";
        if(vb[i]>=k)
        {
            s=s+((vb[i]-k+1)*onea);
        }
    }

    //cout<<endl;




    for(int i=0; i<va.size(); i++)
    {
        //cout<<va[i]<<" aa ";
        if(va[i]>=k)
        {
            s=s+((va[i]-k+1)*oneb);
        }
    }


    //cout<<endl;


    //cout<<s<<endl;



    if(k%2==0 && k/2!=1)
    {
        ll kk=k/2;

        //cout<<"kk = "<<kk<<endl;



        ll s1=0,s2=0;
        for(int i=0; i<vb.size(); i++)
        {
            //cout<<vb[i]<<" bb ";
            if(vb[i]>=kk)
            {
                s1=s1+((vb[i]-kk+1));
            }
        }

       //cout<<endl;

        //cout<<s1<<" s1"<<endl;




        for(int i=0; i<va.size(); i++)
        {
            //cout<<va[i]<<" aa ";
            if(va[i]>=kk)
            {
                s2=s2+((va[i]-kk+1))*s1;
            }
        }


        //cout<<endl;

        //cout<<s2<<" s2"<<endl;


        cout<<s+s2<<endl;


    }
    else
        cout<<s<<endl;







    return 0;
}
