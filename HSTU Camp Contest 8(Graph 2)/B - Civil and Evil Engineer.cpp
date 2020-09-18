#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

map<int,int> p,sz;

class edge
{
public:
    int u,v,w;
    edge(int uu,int vv,int ww)
    {
        u=uu;
        v=vv;
        w=ww;
    }
};

bool comparator(edge a,edge b)
{
    return a.w<b.w;
}

bool comparator2(edge a,edge b)
{
    return a.w>b.w;
}

vector<edge> g,g2;



int find_set(int v)
{
    if(v==p[v])
        return v;

    return p[v]=find_set(p[v]);
}


ll kruskal(int n)
{
    for(int i=0; i<=n; i++)
    {
         p[i]=i;
         sz[i]=1;
    }

    int c=0;

    ll s=0;


    int u,v;
    for(int i=0; i<g.size(); i++)
    {
        u=find_set(g[i].u);
        v=find_set(g[i].v);

        if(u!=v)
        {
            if(sz[u]<sz[v])
                swap(u,v);

            p[u]=v;
            sz[u]=sz[u]+sz[v];

            //cout<<g[i].u<<" -- "<<g[i].v<<" "<<g[i].w<<endl;
            c++;
            s=s+g[i].w;

            if(c==n-1)
                break;
        }
    }
    return s;
}

int main()
{
    faster

    int t,n,k=1;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int u,v,w;

        while(1)
        {
            cin>>u>>v>>w;

            if(u==0 && v==0 && w==0)
                break;


            g.pb(edge(u,v,w));
        }

        sort(g.begin(),g.end(),comparator);

        ll mn=kruskal(n+1);
        //cout<<mn<<endl;

        p.clear();
        sz.clear();

        sort(g.begin(),g.end(),comparator2);
        ll mx=kruskal(n+1);
        //cout<<mx<<endl;

        if((mn+mx)%2==0)
            cout<<"Case "<<k<<": "<<(mn+mx)/2<<endl;
        else
            cout<<"Case "<<k<<": "<<(mn+mx)<<"/2"<<endl;

        k++;

        p.clear();
        sz.clear();

        g.clear();
    }






    return 0;
}
