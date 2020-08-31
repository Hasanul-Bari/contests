#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[105];

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    int u,v;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v;

        a[u]++;
        a[v]++;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    bool f=true;
    vector<int> vv;
    int c=0;

    while(f==true)
    {

        f=false;

        for(int i=1; i<=n; i++)
        {
            if(a[i]==1)
            {
                f=true;
                vv.pb(i);

            }
        }

        if(f==true)
        {
            c++;
            for(int i=0; i<vv.size(); i++)
            {
                a[vv[i]]--;

                for(int j=0; j<adj[vv[i]].size(); j++)
                {
                    int x=adj[vv[i]][j];
                    if(a[x]>0)
                        a[x]--;
                }
            }
        }

        vv.clear();

        //cout<<c<<" =c"<<endl;

        /*for(int i=1; i<=n; i++)
            cout<<a[i]<<"  ";
        cout<<endl;*/
    }

    cout<<c<<endl;




    return 0;
}
