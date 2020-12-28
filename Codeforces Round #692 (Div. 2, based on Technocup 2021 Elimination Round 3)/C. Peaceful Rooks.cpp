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

    int n,m,x,y;
    cin>>n>>n;

    int c=0;
    map<int,int> mx,my;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;

        if(x==y)
            c++;
        else
        {
            mx[x]++;
            my[y]++;
        }
    }




    return 0;
}
