#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,m,x;
    cin>>n>>m;

    int a[n][m],b[n],ans[n][m];
    vector< pair<int,int> > v;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
            v.pb({a[i][j],i});

            ans[i][j]=-1;
        }

        b[i]=0;
    }

    sort(v.begin(),v.end());


    for(int i=0; i<m; i++)
    {
        //cout<<v[i].first<<" ** "<<v[i].second<<endl;

        ans[v[i].second][i]=v[i].first;
    }

    for(int i=m; i<(n*m); i++)
    {
        int x=v[i].second;

        while(b[x]<m && ans[x][b[x]]>0)
        {
            b[x]++;
        }


        ans[x][b[x]]=v[i].first;
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

