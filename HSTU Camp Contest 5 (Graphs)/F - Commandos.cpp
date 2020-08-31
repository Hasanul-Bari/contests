#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int bfs(vector<int> adj[],int n,int src,int des)
{
    bool vis[n];

    for(int i=0; i<n; i++)
        vis[i]=false;

    int l[n];

    l[src]=0;
    vis[src]=true;

    queue<int> q;
    q.push(src);

    while(q.empty()==false)
    {
        int x=q.front();
        q.pop();

        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];

            if(vis[y]==false)
            {
                vis[y]=true;
                l[y]=l[x]+1;
                q.push(y);
            }
        }
    }
    return l[des];
}


int main()
{
    faster

    int t,n,r,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n>>r;

        vector<int> adj[n];

        int u,v;
        while(r--)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        int s,d,l=0,ans;
        cin>>s>>d;


        for(int i=0; i<n; i++)
        {
            l=0;

            l=l+bfs(adj,n,s,i);
            l=l+bfs(adj,n,i,d);

            if(i==0)
                ans=l;
            else if(ans<l)
                ans=l;
        }

        cout<<"Case "<<k<<": "<<ans<<endl;
        k++;


    }




    return 0;
}
