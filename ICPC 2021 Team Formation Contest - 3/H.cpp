#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;




int main()
{
    faster

    int n,m,l;

    cin>>n>>m>>l;


    queue<int> q;



    vector<bool> vis;
    for(int i=0; i<=l; i++)
        vis.pb(false);

    vis[0]=true;

    if(n<=l)
    {
        q.push(n);
        vis[n]=true;
    }


    while(q.size()!=0)
    {
        int x=q.front();
        q.pop();



        if(x+n<=l && vis[x+n]==false)
        {
            vis[x+n]=true;
            q.push(x+n);
        }


        if(x-m>=0  && vis[x-m]==false)
        {
            vis[x-m]=true;

            q.push(x-m);
        }

    }

    /*for(int i=0; i<100; i++)
        cout<<vis[i]<<" ** ";
    cout<<endl;*/


    int f,x,c=0;
    cin>>f;

    while(f--)
    {
        cin>>x;

        if(vis[x]==true)
            c++;
    }

    cout<<c<<endl;




    return 0;
}

