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

    int t;
    cin>>t;

    int n,m,x;

    while(t--)
    {
        cin>>n;

        ll s1=0,s2=0,mx1=0,mx2=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            s1=s1+x;

            mx1=max(mx1,s1);
        }

        cin>>m;

        for(int i=0; i<m; i++)
        {
            cin>>x;

            s2=s2+x;

            mx2=max(mx2,s2);
        }

        cout<<mx1+mx2<<endl;
    }




    return 0;
}
