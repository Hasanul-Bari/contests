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

    int t,n;

    ll a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>n;

        ll aa[n],bb[n];

        for(int i=0; i<n; i++)
            cin>>aa[i];

        for(int i=0; i<n; i++)
            cin>>bb[i];

        bool f=true;
        ll mx=0;
        for(int i=0; i<n; i++)
        {
            ll r=bb[i]/a;

            if(bb[i]%a!=0)
                r++;

            b=b-(r*aa[i]);
            //ll z=r*aa[i];
            mx=max(mx,aa[i]);

            if(b<0)
            {
                f=false;
            }
        }

        if(b+mx>0)
            f=true;


        if(f==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }




    return 0;
}
