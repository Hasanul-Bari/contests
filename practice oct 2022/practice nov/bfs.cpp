#include<iostream>
#include<queue>
using namespace std;

bool adj[40000][40000];
bool visited[200000];
int p[200000];
int n;

int que[200000];
int f,r;


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


    int src=1,dest=n;
    //cin>>src>>dest;

    f=0,r=0;

    que[r]=src;
    r++;

    //queue<int> q;
    //q.push(src);
    visited[src]=true;

    while(f!=r)
    {
        int x=que[f];
        f++;

        //int x=q.front();
        //cout<<x<<endl;
        //q.pop();

        for(int i=1; i<=n; i++)
        {
            if(adj[x][i]==true)
            {
                if(visited[i]==false)
                {
                    visited[i]=true;
                    p[i]=x;

                    que[r]=i;
                    r++;
                    //q.push(i);
                }
            }
        }

    }

    if(visited[dest]==false)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    int ans[200000];
    int c=0;

    while(dest!=src)
    {
        ans[c]=dest;
        c++;
        dest=p[dest];
    }
    ans[c]=dest;
    c++;


    cout<<c<<endl;
    for(int i=c-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}

/*
8 14
1 4
1 2
1 7
2 5
2 7
3 2
3 5
3 8
4 6
4 7
5 7
6 1
7 6
8 7
*/

