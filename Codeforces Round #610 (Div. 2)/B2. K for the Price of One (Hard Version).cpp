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

    int n,p,k,t;

    cin>>t;

    while(t--)
    {
        cin>>n>>p>>k;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll dp[n+1],x,ans=0;

        int i;
        for(i=0; i<k; i++)
        {
            if(i==k-1 || i==0)
                dp[i]=a[i];
            else
                dp[i]=dp[i-1]+a[i];

            if(dp[i]<=p)
                ans=i+1;

        }

        if(a[k-1]<=p)
            ans=k;


        for(i=k; i<n; i++)
        {
            dp[i]=min(dp[i-1]+a[i],dp[i-k]+a[i]);

            if(dp[i]<=p)
                ans=i+1;
        }


        /*for(int i=0; i<n; i++)
            cout<<dp[i]<<" ";
        cout<<endl;*/

        cout<<ans<<endl;


    }






    return 0;
}
