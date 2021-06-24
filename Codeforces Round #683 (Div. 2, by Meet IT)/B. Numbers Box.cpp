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

    int a[n][m],ng=0,z=0;
    ll s=0,mn=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];

            if(a[i][j]<0)
                ng++;

            if(a[i][j]==0)
                z++;

            s=s+abs(a[i][j]);

            if(i==0 && j==0)
            {
                mn=abs(a[i][j]);
            }
            else if(mn>abs(a[i][j]))
            {
                mn=abs(a[i][j]);
            }


        }
    }

    if(z>1 || ng==0)
        cout<<s<<endl;
    else if(ng%2==0)
        cout<<s<<endl;
    else
        cout<<s-(2*mn)<<endl;
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

