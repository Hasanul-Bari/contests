#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



void dfs(int src,vector<int> adj[],vector<int> w[],ll d[])
{
    //cout<<src<<endl;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];

        if(d[x]==-1)
        {
            d[x]=d[src]+w[src][i];

            dfs(x,adj,w,d);
        }




    }


}


int main()
{
    faster

    int n,t,k=1;

    cin>>t;

    while(t--)
    {


        cin>>n;

        vector<int> adj[n+1];
        vector<int> w[n+1];

        int u,v,ww;

        ll d[n+1];

        for(int i=0; i<n-1; i++)
        {
            d[i]=-1;

            cin>>u>>v>>ww;

            adj[u].pb(v);
            adj[v].pb(u);
            w[u].pb(ww);
            w[v].pb(ww);
        }
        d[n-1]=-1;


        d[0]=0;
        dfs(0,adj,w,d);

        ll mx=0;
        int id;
        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<d[i]<<endl;

            if(d[i]>mx)
            {
                mx=d[i];
                id=i;
            }
            d[i]=-1;
        }


        d[id]=0;
        dfs(id,adj,w,d);

        mx=0;

        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<d[i]<<endl;

            if(d[i]>mx)
            {
                mx=d[i];

            }
        }

        cout<<"Case "<<k<<": "<<mx<<endl;
        k++;

    }



    return 0;
}
