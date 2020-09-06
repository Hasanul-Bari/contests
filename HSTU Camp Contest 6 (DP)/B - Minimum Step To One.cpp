#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int dp[20000005];

int solve(int n)
{

    if(n==1)
    {
        return 0;
    }
    else if(dp[n]!=0)
    {
        return dp[n];
    }

    else
    {
        if(n%2==0 && n%3==0)
        {
            dp[n]=1+min(min(solve(n/3),solve(n/2)),solve(n-1));
        }
        else if(n%2==0)
        {
            dp[n]=1+min(solve(n/2),solve(n-1));
        }
        else if(n%3==0)
        {
            dp[n]=1+min(solve(n/3),solve(n-1));
        }
        else
            dp[n]=1+solve(n-1);

        return dp[n];

    }


}


int main()
{
    faster

    int t,n,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n;


        cout<<"Case "<<k<<": "<<solve(n)<<endl;
        k++;




    }





    return 0;
}
