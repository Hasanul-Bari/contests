#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;

int temp,l,c;

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

void printpath(int u,int s, map< pair<int,int>, int> w)
{
    if(u==s)
    {
        //cout<<u<<" "<<s<<endl;
        return ;
    }
    printpath(p[u],s,w);


    int x=u,y=p[u];

    //cout<<u<<" "<<p[u]<<" "<<w[{x,y}]<<endl;

    if(temp+w[ {x,y}]>l)
    {
        c++;
        temp=w[{x,y}];
    }
    else
    {
        temp=temp+w[{x,y}];
    }


    //cout<<c<<" "<<temp+w[{x,y}]<<endl;

    //temp=w[ {x,y}];



}

int main()
{
    faster

    int n,m;
    cin>>n>>m>>l;
    vector <int> adj[n+1];
    map< pair<int,int>, int> w;

    int u,v,z;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v>>z;
        adj[u].push_back(v);
        adj[v].push_back(u);
        w[ {u,v}]=z;
        w[ {v,u}]=z;
    }



    int src,dest,q;
    cin>>q;
    while(q--)
    {

        p.clear();
        c=0;
        temp=0;

        cin>>src>>dest;

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
                if(d[u]+w[ {u,v}]<d[v] && w[ {u,v}]<=l)
                {
                    d[v]=d[u]+w[ {u,v}];
                    p[v]=u;

                    node temp(v,d[v]);

                    q.push(temp);
                }
            }
        }

        if(d[dest]==1e18)
            cout<<-1<<endl;
        else
        {
            printpath(dest,src,w);
            cout<<c<<endl;
        }

    }




    return 0;
}

