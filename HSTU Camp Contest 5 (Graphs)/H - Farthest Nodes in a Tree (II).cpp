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
    //faster

    int n,t,k=1;

    scanf("%d",&t);

    while(t--)
    {


        scanf("%d",&n);

        vector<int> adj[n+1];
        vector<int> w[n+1];

        int u,v,ww;

        ll d1[n+1],d2[n+1];

        for(int i=0; i<n-1; i++)
        {
            d1[i]=-1;

            scanf("%d%d%d",&u,&v,&ww);

            adj[u].pb(v);
            adj[v].pb(u);
            w[u].pb(ww);
            w[v].pb(ww);
        }
        d1[n-1]=-1;


        d1[0]=0;
        dfs(0,adj,w,d1);

        ll mx=0;
        int id1,id2;
        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<d1[i]<<endl;

            if(d1[i]>mx)
            {
                mx=d1[i];
                id1=i;
            }
            d1[i]=-1;
        }


        d1[id1]=0;
        dfs(id1,adj,w,d1);

        mx=0;

        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<d1[i]<<endl;

            if(d1[i]>mx)
            {
                mx=d1[i];
                id2=i;

            }
            d2[i]=-1;
        }

        d2[id2]=0;
        dfs(id2,adj,w,d2);




        //cout<<"Case "<<k<<":"<<endl;
        printf("Case %d:\n",k);
        k++;
        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<d1[i]<<" "<<d2[i]<<endl;

            //cout<<max(d1[i],d2[i])<<endl;

            printf("%lld\n",max(d1[i],d2[i]));

        }





    }



    return 0;
}
