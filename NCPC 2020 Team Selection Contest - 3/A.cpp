#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[1006];

int main()
{
    faster


    int n,m,x,y;
    cin>>n>>m;

    cin>>x;

    while(x--)
    {
        cin>>y;
        //cout<<"y "<<y<<endl;
        a[y]=1;
    }

    vector<int> adj[n+1];

    int ans=-1;

    for(int i=1; i<=n; i++)
    {
        cin>>x;

        while(x--)
        {
            cin>>y;
            adj[i].pb(y);
            //cout<<"y "<<y<<endl;

            if(a[y]==1)
                a[y]=0;
            else
                a[y]=1;
        }

        int c=0;
        for(int j=1; j<=m; j++)
        {
            if(a[j]==0)
            c++;

        }
        if(c==m && ans==-1)
        {
            //cout<<i<<endl;
            ans=i;
            //break;
        }

    }

    if(ans!=-1)
    {
        cout<<ans<<endl;
        return 0;
    }



    for(int i=1; i<=n; i++)
    {




        for(int k=0; k<adj[i].size(); k++)
        {

            int y=adj[i][k];
            //cout<<"y "<<y<<endl;

            if(a[y]==1)
                a[y]=0;
            else
                a[y]=1;
        }

        int c=0;
        for(int j=1; j<=m; j++)
        {
            if(a[j]==0)
            c++;

        }
        if(c==m && ans==-1)
        {
            //cout<<i<<endl;
            ans=n+i;
            //break;
        }

    }

    cout<<ans<<endl;






    return 0;
}
