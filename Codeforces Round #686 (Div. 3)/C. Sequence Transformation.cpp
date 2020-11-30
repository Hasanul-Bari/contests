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
        int a[n];

        map<int,int> m;
        map<int,int> :: iterator it;


        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                if(a[i]!=a[i-1])
                {
                    m[a[i-1]]++;
                }
            }
        }
        m[a[n-1]]++;

        int ans,mn=INT_MAX;
        for(it=m.begin(); it!=m.end(); it++)
        {
            ans=it->second+2;

            if(it->first==a[0])
                ans--;

            if(it->first==a[n-1])
                ans--;

            mn=min(mn,ans);


        }

        cout<<mn-1<<endl;


    }




    return 0;
}
