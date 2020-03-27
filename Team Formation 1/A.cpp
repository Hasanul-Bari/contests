#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int c;

void dfs(int src,vector <int> adj[],bool visited[])
{

    visited[src]=true;
    c++;

    //cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x,adj,visited);
        }

    }


}

int main()
{
    faster

    int t;
    cin>>t;

    while(t--)
    {


        int n,m;
        cin>>n>>m;

        vector <int> adj[n+1];
        bool visited[n+1];


        int u,v;
        for(int i=0; i<m; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=1; i<=n; i++)
            visited[i]=false;




        int mx=0;
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
            {
                dfs(i,adj,visited);

                if(c>mx)
                    mx=c;

                //cout<<i<<" ** "<<mx<<endl;

                c=0;
            }
        }

        cout<<mx<<endl;

    }





    return 0;
}
