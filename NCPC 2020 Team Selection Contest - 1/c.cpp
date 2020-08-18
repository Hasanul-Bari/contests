#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

char adj[22][22];
bool visited [22][22];
int r,c,cc,mxx;

struct cell
{
    int x,y;
};
int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

bool isvalid(int x, int y)
{
    //cout<<x<<" "<<y<<" "<<r<<" "<<c<<endl;
    if(x>=0 && x<r && y>=0 && y<c)
        return true;
    else
        return false;
}
void dfs(cell src)
{
    visited[src.x][src.y]=true;
    cc++;
    //cout<<src.x<<" "<<src.y<<endl;;
    for(int i=0; i<4; i++)
    {
        cell v;
        v.x=src.x+mx[i];
        v.y=src.y+my[i];
        //cout<<visited[v.x][v.y]<<" "<<isvalid(v.x,v.y)<<" "<<adj[v.x][v.y]<<" "<<v.x<<" "<<v.y<<endl;
        if(visited[v.x][v.y]==false && isvalid(v.x,v.y)==true  && adj[v.x][v.y]=='l')
        {
            dfs(v);
        }
    }
}
int main()
{
    faster
    cin>>r>>c;

    cc=0,mxx=0;
    vector<cell> v;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>adj[i][j];
            visited[i][j]=false;
        }
    }
    cell src;
    cin>>src.x>>src.y;
    dfs(src);
    //cout<<cc<<endl;
    return 0;
}

