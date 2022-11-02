#include<iostream>
using namespace std;

bool adj[100][100];
bool visited[100];
int n;


void dfs(int src)
{

    visited[src]=true;

    cout<<src<<" ";

    for(int i=1; i<=n; i++)
    {
        int x=adj[src][i];
        //cout<<x<<" ** "<<visited[i]<<endl;
        if(adj[src][i]==true && visited[i]==false)
        {
            dfs(i);
        }

    }


}


int  main()
{
    int e;
    cin>>n>>e;

    int u,v;

    for(int i=1; i<=n; i++)
    {
        visited[i]=false;
    }

    for(int i=0; i<e; i++)
    {
        cin>>u>>v;

        adj[u][v]=true;
        adj[v][u]=true;
    }


    dfs(1);

}
