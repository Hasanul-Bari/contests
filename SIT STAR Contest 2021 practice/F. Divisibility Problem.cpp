#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool isvalid(ll x, ll n)
{
    string s=to_string(x);

    int cc=0;

    for(char c : s)
    {
        //cout<<c<<" ***"<<endl;
        if(c=='1' || c=='2')
        {
            cc++;
        }
    }

    //cout<<x<<" ** "<<c<<endl;

    if(cc==s.length() && cc==n)
        return true;
    else
        return false;

}

int main()
{
    faster

    int t;
    ll n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        cout<<(1<<n)<<endl;

        ll x=(1<<n);

        ll s=1;

        for(int i=1; i<n; i++)
        {
            s=s*10;
        }

        /*for(ll i=x*(s/x); i<=s*10; i=i+x)
        {
            //cout<<i<<endl;
            if(isvalid(i,n))
            {
                cout<<i<<endl;
            }
        }*/


    }




    return 0;
}


