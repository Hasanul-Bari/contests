#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



int bfs(int n, vector <int> adj[], int src,int des)
{

    bool visited[n];

    for(int i=0; i<n; i++)
        visited[i]=false;

    int level[n];
    queue <int> q;

    visited[src]=true;
    level[src]=0;

    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(visited[y]==false)
            {
                visited[y]=true;
                level[y]=level[x]+1;
                q.push(y);

            }
        }
    }

    //cout<<level[des]<<endl;
    return level[des];
}




int main()
{
    int n,e,t,c,k=1;
    cin>>t;

    while(t--)
    {

        cin>>n>>e;
        vector <int> adj[n];

        int u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            if(u!=v)
            {
                adj[u].pb(v);
                adj[v].pb(u);
            }
            else
                adj[u].pb(v);
        }


        int src,des;
        cin>>src>>des;
        int s,ans;

        for(int i=0; i<n; i++)
        {
            s=0;
            s=s+bfs(n,adj,src,i);
            s=s+bfs(n,adj,i,des);

            if(i==0)
                ans=s;
            else
            {
                if(s>ans)
                    ans=s;
            }

        }


        cout<<"Case "<<k<<": "<<ans<<endl;
        k++;


    }

    return 0;


}
