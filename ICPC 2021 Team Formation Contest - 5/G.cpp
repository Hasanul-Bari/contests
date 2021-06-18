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

    int n;
    ll k,a;

    cin>>n>>k>>a;


    ll os=k/a;

    ll t,s;

    ll mn;

    for(int i=0; i<n; i++)
    {
        cin>>t>>s;

        ll x=os/t;


        ll z=(x*t)+(x*s);

        if(os%t==0)
            z=z-s;
        else
            z=z+(os%t);

        //cout<<z<<" ** "<<endl;

        if(i==0)
            mn=z;
        else
            mn=min(mn,z);


    }

    cout<<mn<<endl;




    return 0;
}


