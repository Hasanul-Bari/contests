#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector<int> adj[500005];
bool vis[500005];
int grp[500005];

int cc,c;


void dfs(int src)
{
    vis[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];

        if(vis[x]==false)
        {
            cc++;
            grp[x]=c;
            dfs(x);
        }
    }
}

int main()
{
    faster

    int n,m,x,u,v;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>x;

        for(int j=0; j<x; j++)
        {
            cin>>v;

            if(j!=0)
            {
                adj[u].pb(v);
                adj[v].pb(u);
            }
            u=v;
        }
    }

    vector<int> ppl;

    for(int i=1; i<=n; i++)
    {
        if(vis[i]==false)
        {
            cc=1;
            grp[i]=c;

            dfs(i);

            //cout<<cc<<" cc"<<endl;
            ppl.pb(cc);



            c++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<ppl[grp[i]]<<" ";
    }
    cout<<endl;




    return 0;
}
