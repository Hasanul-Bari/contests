#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int m=1000000007;

int main()
{
    faster

    int h,w;
    cin>>h>>w;

    char c[h][w];
    int dp[h][w];

    dp[0][0]=1;

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>c[i][j];

            if(c[i][j]=='#')
            {
                dp[i][j]=0;
            }
            else
            {
                if(i-1>=0 && j-1>=0)
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%m;
                else if(i-1>=0)
                    dp[i][j]=dp[i-1][j];
                else if(j-1>=0)
                    dp[i][j]=dp[i][j-1];
            }
        }
    }

    cout<<dp[h-1][w-1]<<endl;






    return 0;
}
