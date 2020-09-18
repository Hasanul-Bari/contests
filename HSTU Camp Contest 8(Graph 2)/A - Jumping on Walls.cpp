#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool vis[2][100005];

class info
{
public:
    int p,ct,tp;
    info(){};
    info(int pp,int tpp,int ctt)
    {
        p=pp;
        tp=tpp;
        ct=ctt;
    }
};

int main()
{
    faster

    int n,k;
    string a,b;

    cin>>n>>k>>a>>b;

    info src(0,1,0);

    queue<info> q;

    q.push(src);

    while(!q.empty())
    {
        info x=q.front();
        q.pop();

        //cout<<x.p<<" "<<x.tp<<" "<<x.ct<<endl;

        if(x.p+1>=n || x.p+k>=n)
        {
            cout<<"YES"<<endl;
            return 0;
        }



        if(x.p+1<n)
        {
            //cout<<"Enter"<<endl;
            if(x.tp==1 && a[x.p+1]=='-' && vis[0][x.p+1]==false)
            {
                 q.push(info(x.p+1,x.tp,x.ct+1));
                 vis[0][x.p+1]=true;

            }
            else if(x.tp==2 && b[x.p+1]=='-' && vis[1][x.p+1]==false)
            {
                q.push(info(x.p+1,x.tp,x.ct+1));
                vis[1][x.p+1]=true;
            }

        }


        if(x.p-1>=0 && x.ct<x.p-1)
        {
            //cout<<"Enter2"<<endl;
            if(x.tp==1 && a[x.p-1]=='-' && vis[0][x.p-1]==false)
            {
                q.push(info(x.p-1,x.tp,x.ct+1));
                vis[0][x.p-1]=true;
            }


            else if(x.tp==2 && b[x.p-1]=='-' && vis[1][x.p-1]==false)
            {
                q.push(info(x.p-1,x.tp,x.ct+1));
                vis[1][x.p-1]=true;
            }

        }

        if(x.p+k<n)
        {
            //cout<<"Enter3"<<endl;
            if(x.tp==1 && b[x.p+k]=='-' && vis[1][x.p+k]==false)
            {
                q.push(info(x.p+k,2,x.ct+1));
                vis[1][x.p+k]=true;
            }


            else if(x.tp==2 && a[x.p+k]=='-' && vis[0][x.p+k]==false)
            {
                q.push(info(x.p+k,1,x.ct+1));
                vis[0][x.p+k]=true;
            }

        }



    }

    cout<<"NO"<<endl;


    return 0;
}
