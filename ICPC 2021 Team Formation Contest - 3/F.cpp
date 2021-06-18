#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}


int main()
{
    faster

    ll n,a,b;
    cin>>n>>a>>b;

    int c=0;

    while(n>0)
    {

        if(c%2==0)
            n=n-gcd(n,b);
        else
            n=n-gcd(n,a);

        //cout<<n<<endl;

        c++;
    }

    //cout<<c<<endl;

    if(c%2==0)
        cout<<1<<endl;
    else
        cout<<0<<endl;





    return 0;
}



