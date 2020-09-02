#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int n;
map< pair<int,int>, bool> m;

class cell
{
public:
    int x,y;
};

cell a[105];

void dfs(int x,int y)
{
    m[{x,y}]=true;

    //cout<<x<<" "<<y<<endl;

    for(int i=0; i<n; i++)
    {

        if(m[{a[i].x,a[i].y}]==false &&  (x==a[i].x || y==a[i].y) )
        {
                dfs(a[i].x,a[i].y);
        }
    }


}



int main()
{
    faster

    cin>>n;


    for(int i=0; i<n; i++)
    {
        cin>>a[i].x>>a[i].y;

        m[{a[i].x,a[i].y}]=false;

    }

    int c=0;

    for(int i=0; i<n; i++)
    {

        if(m[{a[i].x,a[i].y}]==false)
        {
            dfs(a[i].x,a[i].y);
            c++;
        }
    }

    cout<<c-1<<endl;







    return 0;
}
