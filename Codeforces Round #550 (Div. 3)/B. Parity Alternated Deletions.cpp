#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    ll xx;
    vector<ll> e,o;
    int ee=0,oo=0;

    for(int i=0; i<n; i++)
    {
        cin>>xx;
        if(xx%2==0)
        {
            e.push_back(xx);
        }
        else
        {
            o.push_back(xx);
        }
    }

    //cout<<e.size()<<" "<<o.size()<<endl;

    int x=e.size();
    int y=o.size();

    if(abs(x-y)<=1)
        cout<<0<<endl;
    else
    {
        if(x>y)
        {
            sort(e.begin(),e.end());
            ll s=0;
            int z=x-y;
            for(int i=0; i<z-1; i++ )
                s=s+e[i];

            cout<<s<<endl;
        }
        else
        {
            sort(o.begin(),o.end());
            ll s=0;
            int z=y-x;
            for(int i=0; i<z-1; i++)
                s=s+o[i];

            cout<<s<<endl;
        }
    }




    return 0;
}
