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

    int t,n,tc=1;
    ll x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        vector<ll> v[2*n+5];

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<i; j++)
            {
                cin>>x;
                v[i].pb(x);

                if(i!=1)
                {
                    if(j==0)
                        v[i][j]=v[i][j]+v[i-1][j];
                    else if(j==i-1)
                        v[i][j]=v[i][j]+v[i-1][j-1];
                    else
                    {
                        v[i][j]=v[i][j]+max(v[i-1][j],v[i-1][j-1]);
                    }
                }


            }
        }

        for(int k=n-1,i=n+1; k>=1; k--,i++)
        {
            for(int j=0; j<k; j++)
            {
                cin>>x;
                v[i].pb(x);

                v[i][j]=v[i][j]+max(v[i-1][j],v[i-1][j+1]);
            }
        }

        /*cout<<"--"<<endl;

        for(int i=1; i<=2*n-1; i++)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/

        cout<<"Case "<<tc<<": "<<v[2*n-1][0]<<endl;
        tc++;


    }






    return 0;
}
