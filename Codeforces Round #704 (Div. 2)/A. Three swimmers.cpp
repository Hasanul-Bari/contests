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

    int t;

    ll p,a,b,c;

    cin>>t;

    while(t--)
    {

        cin>>p>>a>>b>>c;

        ll d1=(p%a);

        if(d1!=0)
            d1=a-d1;

        ll d2=(p%b);

        if(d2!=0)
            d2=b-d2;

        ll d3=(p%c);

        if(d3!=0)
            d3=c-d3;

        //cout<<d1<<" "<<d2<<" "<<d3<<endl;
        cout<<min(d1,min(d2,d3))<<endl;
    }




    return 0;
}



