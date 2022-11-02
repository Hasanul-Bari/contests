#include<iostream>
using namespace std;

bool adj[100][100];
int visited[100];
int p[100];
int n;

int start=-1,en=-1;


bool dfs(int src)
{

    visited[src]=1;

    //cout<<src<<" ";

    for(int i=1; i<=n; i++)
    {
        int x=adj[src][i];
        //cout<<x<<" ** "<<visited[i]<<endl;
        if(adj[src][i]==true)
        {

            if(visited[i]==1)
            {
                //cout<<"Cycle"<<" "<<i<<endl;
                start=i;
                en=src;
                return true;
            }
            else if(visited[i]==0)
            {
                p[i]=src;
                if(dfs(i)==true)
                    return true;

            }


        }

    }

    visited[src]=2;

    return false;


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

    }

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            if(dfs(i))
                break;
        }
    }

    cout<<start<<" "<<en<<endl;


}



