#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    ll n;
    cin>>n;
    if(n>=1 && n<=9)
    {
        cout<<9<<endl;
    }
    else
    {

        ll ans=1;

        n=n+1;

        while(n/10!=0)
        {
            //cout<<n<<endl;
            if(n%10==0)
            {
                n=n/10;
            }
            else
            {
                ans++;
                //cout<<n<<"*"<<endl;
                n++;

            }
        }
        cout<<ans+9<<endl;


    }


    return 0;
}
