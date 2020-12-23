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
    ll n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        while(true)
        {
            string s=to_string(n);

            ll c=0;
            for(ll j=0; j<s.length(); j++)
            {
                ll x=s[j]-'0';

                if(x==0)
                    c++;
                else if(n%x==0)
                    c++;
            }


            if(c==s.length())
            {
                break;
            }
            n++;
        }

        cout<<n<<endl;
    }







        return 0;
}
