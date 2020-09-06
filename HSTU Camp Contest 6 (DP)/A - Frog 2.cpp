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

    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int dp[n],mn;

    dp[0]=0;

    for(int i=1; i<n; i++)
    {
        for(int j=i-1; j>=0 && j>=i-k; j--)
        {
            if(j==i-1)
                mn=abs(a[i]-a[j])+dp[j];
            else
                mn=min(mn,abs(a[i]-a[j])+dp[j]);
        }

        dp[i]=mn;
    }

    /*for(int i=0; i<n; i++)
    {
        cout<<dp[i]<<endl;
    }*/

    cout<<dp[n-1]<<endl;




    return 0;
}
