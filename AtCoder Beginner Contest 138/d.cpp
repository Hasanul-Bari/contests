#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int c[200010];

vector <int> adj[200010];
void dfs(int src,int v)
{
    c[src]=c[src]+v;

    //cout<<src<<" ** "<<c[src]<<endl;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];


        dfs(x,v);

    }


}



int main()
{
    faster

    int n,q;
    cin>>n>>q;

    //vector<int> adj[n+1];
    int x,y,p;
    for(int i=0; i<n-1; i++)
    {
        c[i+1]=0;
        cin>>x>>y;
        adj[x].push_back(y);

    }

    for(int i=0; i<q; i++)
    {
        cin>>p>>x;
        dfs(p,x);

    }

    for(int i=1; i<=n; i++)
        cout<<c[i]<<" ";
    cout<<endl;




    return 0;
}
