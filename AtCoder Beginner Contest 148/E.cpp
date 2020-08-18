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
    ll n,nn;
    cin>>n;

    if(n%2==0)
    {

        ll c1=0;

        nn=n/2;

        while(nn!=0)
        {

            c1=c1+(nn/5);
            nn=nn/5;

        }

        cout<<c1<<endl;


    }
    else
        cout<<0<<endl;




    return 0;
}
