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

    ll r,g,b;
    cin>>r>>g>>b;

    ll rr[r],gg[g],bb[b];

    for(int i=0; i<r; i++)
        cin>>rr[i];

    for(int i=0; i<g; i++)
        cin>>gg[i];

    for(int i=0; i<b; i++)
        cin>>bb[i];


    sort(rr,rr+r);
    sort(gg,gg+g);

    sort(bb,bb+b);

    ll i=r-1,j=g-1,k=b-1;

    ll s=0;

    //cout<<i<<" "<<j<<" "<<k<<endl;

    while( (i>=0 && j>=0) || (j>=0 && k>=0) || (i>=0 && k>=0) )
    {

        //cout<<"Rnetr"<<endl;
        ll x,y,z;

        if(i>=0)
            x=rr[i];
        else
            x=-1;

        if(j>=0)
            y=gg[j];
        else
            y=-1;

        if(k>=0)
            z=bb[k];
        else
            z=-1;

        //cout<<x<<" "<<y<<" "<<z<<endl;

        if(x>=z && y>=z && x!=-1 && y!=-1)
        {
            //cout<<"E1"<<endl;
            s=s+(x*y);
            i--;
            j--;
        }
        else if(y>=x && z>=x && y!=-1 && z!=-1)
        {
            //cout<<"E2"<<endl;
            s=s+(y*z);
            j--;
            k--;
        }
        else if(x>=y && z>=y && x!=-1 && z!=-1)
        {
            //cout<<"E3"<<endl;
            s=s+(x*z);
            i--;
            k--;
        }

        //cout<<s<<endl;


    }

    cout<<s<<endl;


    return 0;
}

