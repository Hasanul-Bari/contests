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

    ll x,k,d;

    cin>>x>>k>>d;


    ll a=abs(x);

    ll s=a/d;

    if(k<=s)
    {
        cout<<a-(k*d)<<endl;
    }
    else
    {
        k=k-s;
        a=a-(s*d);


        if(k%2==0)
            cout<<a<<endl;
        else
            cout<<abs(d-a)<<endl;

        //cout<<k<<" "<<a<<endl;
    }




    return 0;
}
