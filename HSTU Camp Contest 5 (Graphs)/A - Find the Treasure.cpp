#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void printpath(int u,int s,int p[])
{
    if(u==s)
    {
        //cout<<s<<" "<<u<<endl;
        return ;
    }
    printpath(p[u],s,p);

    cout<<p[u]<<" ";
}

void bfs(vector<int> adj[],int n)
{
    bool vis[n+1];
    int l[n+1];
    int p[n+1];
    queue <int> q;

    for(int i=1; i<=n; i++)
    {
        vis[i]=false;
        p[i]=i;
        l[i]=-1;
    }

    vis[1]=true;
    l[1]=0;



    q.push(1);

    while(q.empty()!=1)
    {
        int x=q.front();

        //cout<<x<<" ** "<<l[x]<<endl;
        if(x==n)
        {
            break;
        }

        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(vis[y]==false)
            {
                vis[y]=true;
                l[y]=l[x]+1;
                p[y]=x;
                q.push(y);
            }
        }
    }




    cout<<l[n]<<endl;

    if(l[n]!=-1)
    {
        printpath(n,1,p);
        cout<<endl;
    }


}



int main()
{
    faster

    int t,n,x,y;
    cin>>t;

    while(t--)
    {
        cin>>n;

        vector <int> adj[n+1];

        for(int i=1; i<n; i++)
        {
            cin>>x;

            while(x--)
            {
                cin>>y;

                adj[i].pb(y);
            }

            sort(adj[i].begin(),adj[i].end());
        }

        bfs(adj,n);
    }




    return 0;
}
