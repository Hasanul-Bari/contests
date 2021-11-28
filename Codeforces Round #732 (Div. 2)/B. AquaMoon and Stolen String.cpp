#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,m;

    cin>>n>>m;

    string a[n],b[n-1];

    ll sa=0,sb=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        cin>>b[i];

    }

    for(int i=0; i<m; i++)
    {
        sa=0,sb=0;
        for(int j=0; j<n; j++)
        {
            if(j==n-1)
            {
                sa=sa+a[j][i];
            }
            else
            {
                sa=sa+a[j][i];
                sb=sb+b[j][i];
            }
        }

        cout<<char(sa-sb);
    }
    cout<<endl;



}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


