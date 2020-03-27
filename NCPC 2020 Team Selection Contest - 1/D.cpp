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
    if(x>=1 && x<=r && y>=1 && y<=c )
    {
        if(x==6 && y==6)
            return false;
        else if(x==6 && y==7)
            return false;
        else if(x==7 && y==6)
            return false;
        else if(x==7 && y==7)
            return false;

        else if(x==9 && y==2)
            return false;
        else if(x==9 && y==3)
            return false;
        else if(x==10 && y==2)
            return false;

        else if(x==9 && y==10)
            return false;
        else if(x==9 && y==11)
            return false;
        else if(x==10 && y==11)
            return false;

        else
            return true;
    }

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
        if(visited[v.x][v.y]==false && isvalid(v.x,v.y)==true )
        {
            if(i==0)
            {
                cout<<"U";
            }
            else if(i==1)
            {
                cout<<"D"
            }
             else if(i==2)
            {
                cout<<"L"
            }
             else if(i==3)
            {
                cout<<"R"
            }

            dfs(v);

        }
    }
}
int main()
{
    faster
    //cin>>r>>c;

    r=12,c=12

           cc=0,mxx=0;
    vector<cell> v;


    cell src;
    cin>>src.x>>src.y;
    dfs(src);
    //cout<<cc<<endl;
    return 0;
}

