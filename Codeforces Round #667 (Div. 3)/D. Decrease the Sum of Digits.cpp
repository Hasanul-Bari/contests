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

    ll n,s;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        string nn=to_string(n);

        ll ss=0,i=1;

        for(auto x: nn)
        {
            ss=ss+(x-'0');

            if(ss>=s)
            {
                i=i*10;
            }

        }

        //cout<<n<<" ** "<<i<<endl;

        ll x=((n/i)+1)*i;
        //cout<<x<<endl;




        if(ss>s)
            cout<<x-n<<endl;
        else
            cout<<0<<endl;
    }




    return 0;
}
