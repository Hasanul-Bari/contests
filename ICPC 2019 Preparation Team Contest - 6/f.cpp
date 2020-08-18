#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;

class node
{
public:
    int name;
    int cost;

    node() {}

    node(int n,int c)
    {
        name=n;
        cost=c;
    }

};

bool operator<(node a,node b)   ///makes the priority queue as min cost node at top
{
    return b.cost<a.cost;
}

void printpath(int u,int s)
{
    if(u==s)
    {
        cout<<u<<" ";
        return ;
    }
    printpath(p[u],s);

    cout<<u<<" ";

}

int main()
{
    faster

    int n,e;
    cin>>n>>e;
    vector <int> adj[n+1];
    vector <int> w[n+1];

    int u,v,z;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v>>z;
        adj[u].push_back(v);
        adj[v].push_back(u);
        w[u].push_back(z);
        w[v].push_back(z);
    }

    int src=1;

    long long d[n+1];

    for(int i=1; i<=n; i++)
        d[i]=1e18;

    d[src]=0;


    node srcn(src,d[src]);

    priority_queue <node> q;

    q.push(srcn);

    while(q.empty()!=1)
    {
        node top=q.top();
        int u=top.name;

        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(d[u]+w[u][i]<d[v])
            {
                d[v]=d[u]+w[u][i];
                p[v]=u;

                node temp(v,d[v]);

                q.push(temp);
            }
        }
    }

    ///path printing
    for(int i=1; i<=n; i++)
    {
        cout<<"Distance from "<<src<<" to "<<i<<" : "<<d[i]<<" and path : ";

        if(d[i]==1e18)
            cout<<"No path"<<endl;
        else
        {
            printpath(i,src);
            cout<<endl;
        }

    }

    return 0;
}


