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

    int a[m];

    for(int i=0; i<m; i++)
        cin>>a[i];

    ll ans=0;

    for(int i=0; i<m; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(a[j]<a[i])
                ans++;
        }
    }


    cout<<ans<<endl;
}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


