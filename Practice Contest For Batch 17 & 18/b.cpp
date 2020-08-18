#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,s;
    while(cin>>n)
    {
        s=0;
        for(ll i=n; i>=0; i=i-2)
        {
            s=s+i;

        }

        ll x=(2*s)-1;

        //cout<<x<<endl;
        if(n==1)
            cout<<1<<endl;
        else
            cout<<x+(x-2)+(x-4)<<endl;

    }
    return 0;


}
