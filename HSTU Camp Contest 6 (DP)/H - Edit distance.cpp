#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void lcs(string x,string y)
{
    int m=x.length(),n=y.length();

    int l[m+1][n+1];


    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0)
                l[i][j]=j;
            else if(j==0)
                l[i][j]=i;

            else if(x[i-1]==y[j-1])
            {
                l[i][j]=l[i-1][j-1];
            }
            else
            {
                l[i][j]=1+min(min(l[i-1][j],l[i][j-1]),l[i-1][j-1]);

            }

        }
    }

    cout<<l[m][n]<<endl;



}


int main()
{
    faster

    int t;
    cin>>t;

    string a,b;

    while(t--)
    {
        cin>>a>>b;
        lcs(a,b);
    }






    return 0;
}
