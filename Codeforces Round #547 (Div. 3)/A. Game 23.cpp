#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll src,des;
    cin>>src>>des;


    queue <ll> q;

    map<ll,ll> visited;
    map<ll,ll> level;
    //map<int,int> :: iterator itr;


    visited[src]=1;

    q.push(src);

    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();

        for(ll i=2; i<=3; i++)
        {
            ll y=x*i;
            if(visited[y]==0 && y<=des)
            {
                visited[y]=1;
                level[y]=level[x]+1;
                q.push(y);
            }
        }
    }
    if(src==des)
        cout<<0<<endl;
    else if(level[des]==0)
        cout<<-1<<endl;
    else

        cout<<level[des]<<endl;


    return 0;
}
