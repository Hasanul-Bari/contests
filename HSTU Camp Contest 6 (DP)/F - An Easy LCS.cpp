#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


char b[105][105];
string dp[105][105];



void lcs(string x,string y)
{
    int m=x.length(),n=y.length();

    int l[m+1][n+1];


    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                l[i][j]=0;
                dp[i][j]="";
            }
            else if(x[i-1]==y[j-1])
            {
                l[i][j]=l[i-1][j-1]+1;
                dp[i][j]=dp[i-1][j-1]+x[i-1];
            }
            else if(l[i-1][j]==l[i][j-1])
            {
                l[i][j]=l[i-1][j];
                dp[i][j]=min(dp[i-1][j],dp[i][j-1]);
            }
            else if(l[i-1][j]>l[i][j-1])
            {
                l[i][j]=l[i-1][j];
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                l[i][j]=l[i][j-1];
                dp[i][j]=dp[i][j-1];
            }
        }
    }



    /*for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/

    if(dp[m][n]=="")
        cout<<":("<<endl;
    else
        cout<<dp[m][n]<<endl;

}




int main()
{
    faster

    int t,k=1;
    string x,y;

    cin>>t;

    while(t--)
    {
        cin>>x>>y;

        cout<<"Case "<<k<<": ";
        k++;

        lcs(x,y);
    }






    return 0;
}
