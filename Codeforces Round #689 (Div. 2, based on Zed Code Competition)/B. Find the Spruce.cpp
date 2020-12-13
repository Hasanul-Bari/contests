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

        int dp[n][m];
        char c[n][m];


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>c[i][j];
                dp[i][j]=0;


            }
        }

        int s=0;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                if(i==n-1)
                {
                    if(c[i][j]=='*')
                        dp[i][j]=1;
                }
                else
                {
                    if(c[i][j]=='*')
                    {
                        int x=dp[i+1][j],y,z;

                        if(j+1<m)
                            y=dp[i+1][j+1];
                        else
                            y=0;

                        if(j-1>=0)
                            z=dp[i+1][j-1];
                        else
                            z=0;


                        dp[i][j]=min(x,min(y,z))+1;
                    }

                }

                s=s+dp[i][j];

            }

        }


        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/



        cout<<s<<endl;


    }




    return 0;
}
