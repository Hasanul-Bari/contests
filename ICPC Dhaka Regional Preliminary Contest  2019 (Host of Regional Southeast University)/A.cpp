#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;


int main()
{
    faster
    int n,q,x,u,v,t;
    cin>>n>>q;

    vector<int> adj[n+1];
    vector<int> post[n+1];

    for(int i=0; i<q; i++)
    {
        cin>>x;
        if(x==0)
        {
            cin>>u>>v;


        }
        else if(x==1)
        {
            cin>>u>>t;
            post[u].push_back(t);


        }
        else if(x==2)
        {

        }
    }








    return 0;
}
