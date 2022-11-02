#include<iostream>
using namespace std;

bool adj[10000][10000];
int visited[100000];
int p[100000];
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

    int ans[200000];
    int c=0;


    if(start==-1)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        while(en!=start)
        {
            //cout<<en<<" ** ";
            ans[c]=en;
            c++;
            en=p[en];
        }
        //cout<<start<<endl;
        ans[c]=start;
        c++;

        cout<<c+1<<endl;
        for(int i=c-1; i>=0; i--)
        {
            cout<<ans[i]<<" ";
        }

        cout<<start<<endl;



    }






}

