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

    int t,n,m;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int c=0;
        char x;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>x;

                if(j==m && x=='R')
                    c++;

                if(i==n && x=='D')
                    c++;
            }
        }

        cout<<c<<endl;

    }







    return 0;
}

