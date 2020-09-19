#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class node
{
public:
    int nm;
    ll c1,c2;

    node() {}

    node(int n,ll x,ll y)
    {
        nm=n;
        c1=x;
        c2=y;
    }

};

bool operator<(node a,node b)
{
    if(b.c1==a.c1)
        return b.c2<a.c2;
    else
        return b.c1<a.c2;
}


int main()
{
    faster

    int t,n,r,k=1;
    cin>>t;

    while(t--)
    {
        cin>>n>>r;

        vector<int> adj[n+1];
        vector<int> w[n+1];

        int u,v,ww;
        while(r--)
        {
            cin>>u>>v>>ww;

            adj[u].pb(v);
            adj[v].pb(u);

            w[u].pb(ww);
            w[v].pb(ww);
        }

        ll d[n+1][2];
        int cnt[n+1];

        for(int i=1; i<=n; i++)
        {
            d[i][0]=1e18;
            d[i][1]=1e18;
            cnt[i]=0;
        }

        int src=1;

        d[src][0]=0;

        priority_queue <node> q;


        q.push(node(1,d[src][0],d[src][1]));





        while(!q.empty())
        {
            node top=q.top();
            int u=top.nm;

            //cout<<u<<" ** "<<top.c1<<" ** "<<top.c2<<endl;
            //cout<<d[u][0]<<" --- "<<d[u][1]<<endl;

            q.pop();

            if(cnt[u]<=3)
            {
                cnt[u]++;


                for(int i=0; i<adj[u].size(); i++)
                {
                    int v=adj[u][i];

                    ll a[4];

                    a[0]=d[u][0]+w[u][i];
                    a[1]=d[u][1]+w[u][i];
                    a[2]=d[v][0];
                    a[3]=d[v][1];

                    //cout<<u<<" -> "<<v<<" "<<a[0]<<" "<<a[1]<<endl;


                    if(a[0]==a[2])
                    {
                        d[v][1]=min(a[1],a[3]);

                        //cout<<d[v][0]<<" pushing "<<d[v][1]<<endl;

                        if(a[3]!=d[v][1])
                            q.push(node(v,d[v][0],d[v][1]));
                    }
                    else
                    {

                        sort(a,a+4);


                        if(a[0]==d[v][0] && a[1]==d[v][1]);
                        else
                        {
                            d[v][0]=a[0];
                            d[v][1]=a[1];

                            //cout<<d[v][0]<<" pushing2 "<<d[v][1]<<endl;

                            q.push(node(v,a[0],a[1]));
                        }

                    }


                }
            }


        }

        cout<<"Case "<<k<<": "<<d[n][1]<<endl;
        k++;

        /*for(int i=1; i<=n; i++)
        {
            cout<<d[i][0]<<" ## "<<d[i][1]<<endl;
        }*/

    }




    return 0;
}
