#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



void bfs(vector<int> adj[],int n,int src)
{
    bool v[n+1];
    ll l[n+1];


    for(int i=0; i<=n; i++)
    {
        v[i]=false;
        l[i]=0;

    }

    queue <int> q;

    v[src]=true;
    l[src]=1;

    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(v[y]==false)
            {
                v[y]=true;
                l[y]=l[x]+1;
                q.push(y);
            }
        }
    }
    ll mx=1;

    for(int i=1; i<=n; i++)
    {
        mx=max(mx,l[i]);
    }

    cout<<mx<<endl;
}

int main()
{
    faster

    int n,a;
    cin>>n>>a;

    vector <int> adj[n+1];


    int u,v;
    for(int i=0; i<n-1; i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);

    }


    bfs(adj,n,a);





    return 0;
}
