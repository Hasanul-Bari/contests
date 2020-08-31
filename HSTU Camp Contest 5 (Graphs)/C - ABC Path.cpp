#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


char adj[52][52];
bool vis [52][52];
int h,w,mxx;

class cell
{
public:
    int x,y;
};
int mx[8]= {-1,1,0,0,-1,-1,1,1};
int my[8]= {0,0,-1,1,-1,1,-1,1};

bool isvalid(int x, int y)
{
    //cout<<x<<" "<<y<<" "<<r<<" "<<c<<endl;
    if(x>=0 && x<h && y>=0 && y<w)
        return true;
    else
        return false;
}
void dfs(cell src,int c)
{

    vis[src.x][src.y]=true;
    c++;

    mxx=max(mxx,c);

    //cout<<adj[src.x][src.y]<<" "<<c<<endl;


    for(int i=0; i<8; i++)
    {
        cell v;
        v.x=src.x+mx[i];
        v.y=src.y+my[i];

        if(vis[v.x][v.y]==false && isvalid(v.x,v.y)==true  && adj[v.x][v.y]-adj[src.x][src.y]==1)
        {
            //cout<<"Enter"<<endl;
            //cout<<adj[v.x][v.y]-adj[src.x][src.y]<<endl;
            //cout<<adj[v.x][v.y]<<" <- "<<adj[src.x][src.y]<<endl;
            //cout<<v.x<<v.y<<" <- "<<src.x<<src.y<<endl;
            dfs(v,c);
        }
    }
}




int main()
{
    faster

    int k=1;

    while(cin>>h>>w)
    {

        if(h==0 && w==0)
            break;

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cin>>adj[i][j];
                vis[i][j]=false;
            }
        }


        mxx=0;


        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(adj[i][j]=='A')
                {
                    int c=0;
                    cell src;
                    src.x=i,src.y=j;
                    dfs(src,c);
                }
            }
        }

        cout<<"Case "<<k<<": "<<mxx<<endl;
        k++;
    }



    return 0;
}

/*
4 3
ABC
CFG
BDH
ABC
*/
