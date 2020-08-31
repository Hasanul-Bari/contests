#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int ans,m;

void dfs(vector<int> adj[],int src,bool a[],bool vis[],int c[])
{
    vis[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];

        if(vis[x]==false)
        {
            if(a[x]==1)
                c[x]=c[src]+1;
            else
                c[x]=0;

            if(adj[x].size()==1 && c[x]<=m)
                ans++;

            if(c[x]<=m)
                dfs(adj,x,a,vis,c);
        }


    }

}


int main()
{
    faster

    int n;
    cin>>n>>m;

    bool a[n+1],vis[n+1];
    int c[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        c[i]=0;
        vis[i]=false;
    }


    vector<int> adj[n+1];
    int u,v;
    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(a[1]==1)
        c[1]++;

    dfs(adj,1,a,vis,c);

    cout<<ans<<endl;





    return 0;
}
