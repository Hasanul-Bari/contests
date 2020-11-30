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

        map<int,int> m,m2;
        map<int,int> :: iterator it;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]++;
            m2[x]=i+1;
        }

        int mn=INT_MAX,ans=-1;

        for(it=m.begin(); it!=m.end(); it++)
        {
            if(it->second==1)
            {
                if(it->first<mn)
                {
                    mn=it->first;
                    ans=m2[mn];
                }
            }
        }

        cout<<ans<<endl;
    }



    return 0;
}
