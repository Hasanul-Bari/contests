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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        map<int,int> m;

        int w[n+1];
        ll s=0;
        for(int i=1; i<=n; i++)
        {
            cin>>w[i];
            s=s+w[i];
        }
        int u,v;
        for(int i=0; i<n-1; i++)
        {
            cin>>u>>v;
            m[u]++;
            m[v]++;
        }

        vector<int> vv;

        for(auto x : m)
        {
            int ss=x.second;
            ss--;
            while(ss--)
            {
                vv.pb(w[x.first]);
            }
        }

        //cout<<vv.size()<<endl;
        sort(vv.begin(),vv.end());

        cout<<s<<" ";
        for(int i=vv.size()-1; i>=0; i--)
        {
            s=s+vv[i];
            cout<<s<<" ";
        }
        cout<<endl;
    }




    return 0;
}
