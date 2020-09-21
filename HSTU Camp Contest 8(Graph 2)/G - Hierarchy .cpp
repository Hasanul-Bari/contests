#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


class edge
{
public:
    int u,v,c;
};

bool comparator(edge a,edge b)
{
    return a.c<b.c;
}


int main()
{
    faster

    int n,m;
    cin>>n;

    int q[n+1];
    bool vis[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>q[i];
        vis[i]=false;
    }


    cin>>m;
    edge g[m];

    for(int i=0; i<m; i++)
    {
        cin>>g[i].u>>g[i].v>>g[i].c;
    }

    sort(g,g+m,comparator);

    int c=0;
    ll s=0;

    for(int i=0; i<m; i++)
    {
        if(vis[g[i].v]==false)
        {
            s=s+g[i].c;
            c++;

            vis[g[i].v]=true;
        }

        if(c==n-1)
            break;
    }

    if(c!=n-1)
        s=-1;

    cout<<s<<endl;






    return 0;
}
