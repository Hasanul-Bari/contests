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

vector<edge> g;

int find_set(int v)
{
    if(v==p[v])
        return v;

    return p[v]=find_set(p[v]);

}



ll kruskal(int n)
{
    for(int i=1; i<=n; i++)
    {
        p[i]=i;
        sz[i]=1;
    }


    sort(g.begin(),g.end(),comparator);

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

            p[v]=u;
            sz[u]=sz[u]+sz[v];

            //cout<<g[i].u<<" -- "<<g[i].v<<endl;

            c++;
            s=s+g[i].w;

            if(c==n-1)
                break;
        }
    }

    //cout<<c<<" c"<<endl;

    if(c==n-1)
        return s;
    else
        return -1;

}

int main()
{
    faster

    int t,m,k=1;

    cin>>t;

    while(t--)
    {

        cin>>m;


        map<string,int> mm;
        int c=1;
        string c1,c2;
        int u,v,w;


        for(int i=0; i<m; i++)
        {
            cin>>c1>>c2>>w;

            if(mm[c1]==0)
            {
                mm[c1]=c;
                c++;
            }

            if(mm[c2]==0)
            {
                mm[c2]=c;
                c++;
            }

            u=mm[c1];
            v=mm[c2];


            g.pb(edge(u,v,w));
        }

        c--;

        //cout<<c<<endl;

        //cout<<kruskal(c)<<endl;

        ll s=kruskal(c);

        if(s==-1)
            cout<<"Case "<<k<<": Impossible"<<endl;
        else
            cout<<"Case "<<k<<": "<<s<<endl;

        k++;


        g.clear();
        p.clear();
        sz.clear();

    }

    return 0;
}


