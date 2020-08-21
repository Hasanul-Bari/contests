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
    cin>>t;

    ll l,r,g;

    while(t--)
    {
        cin>>l>>r>>g;

        if(g>r)
        {
            cout<<0<<endl;
        }
        else if(g<l)
        {
            ll x=l%g;

            if(x!=0)
                x=g-x;

            x=l+x;

            //cout<<x<<endl;

            ll ans;

            if(x>r)
                cout<<0<<endl;
            else if(x==r)
                cout<<0<<endl;
            else
            {
                x=r-x;

                if(x/g==0)
                    cout<<0<<endl;
                else
                    cout<<(x/g)+1<<endl;
            }


            //cout<<x<<endl;


        }
        else
        {
            ll x=g;

            if(x==r)
                cout<<1<<endl;
            else
            {
                x=r-x;

                cout<<(x/g)+1<<endl;
            }
        }
    }




    return 0;
}
