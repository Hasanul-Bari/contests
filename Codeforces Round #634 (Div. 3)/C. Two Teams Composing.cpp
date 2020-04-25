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

    int t,n,x;

    cin>>t;
    while(t--)
    {
        cin>>n;

        map<int,int> m;
        map<int,int> :: iterator it;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]++;

        }

        int z=m.size(),ans=0;

        for(it=m.begin(); it!=m.end(); it++)
        {
            int p=it->second;

            ans=max(ans,min(p-1,z));
            ans=max(ans,min(p,z-1));
        }

        cout<<ans<<endl;

    }




    return 0;
}
