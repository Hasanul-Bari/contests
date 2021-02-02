#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[200];

int main()
{
    faster

    int n,m,k;

    cin>>n>>m;

    map<pair<int,int>,int > mm;

    int x,y;

    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        mm[{x,y}]++;

    }


    cin>>k;

    int p[k],q[k];

    for(int i=0; i<k; i++)
    {
        cin>>p[i]>>q[i];

    }

    for(auto x : mm)
    {
        cout<<x.first.first<<" "<<x.first.second<<" -- "<<x.second<<endl;
    }






    return 0;
}

