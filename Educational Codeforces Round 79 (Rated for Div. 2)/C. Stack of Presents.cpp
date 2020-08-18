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

    int t,n,m,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int p[n+1];

        for(int i=1; i<=n; i++)
        {
            cin>>x;
            p[x]=i;
        }

        ll ans=0,pos;

        for(int i=1; i<=m; i++)
        {
            cin>>x;

            if(i==1)
            {
                ans=ans+((2*(p[x]-1))+1);
                pos=p[x];
            }
            else
            {
                if(p[x]<pos)
                {
                    ans++;
                }
                else
                {
                    pos=p[x];
                    int z=p[x]-(i-1);

                    ans=ans+((2*(z-1))+1);
                }
            }

            //cout<<ans<<" **"<<endl;
        }

        cout<<ans<<endl;
    }




    return 0;
}
