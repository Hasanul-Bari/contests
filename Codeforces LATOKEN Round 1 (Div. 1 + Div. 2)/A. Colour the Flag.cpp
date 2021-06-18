#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

char inverse(char c)
{
    if(c=='R')
        return 'W';
    else
        return 'R';
}


void solve(int tc)
{
    int n,m;
    cin>>n>>m;

    char a[n][m];

    int x=-1,y=-1;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];

            if(a[i][j]!='.')
            {
                x=i;
                y=j;
            }
        }
    }

    bool f=true;

    if(x==-1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 && j==0)
                {
                    a[i][j]='R';
                }
                else if(j==0)
                {
                    a[i][j]=inverse(a[i-1][j]);
                }
                else
                {
                    a[i][j]=inverse(a[i][j-1]);
                }
            }
        }

    }
    else
    {
        for(int i=x-1; i>=0; i--)
        {
            if(a[i][y]=='.')
                a[i][y]=inverse(a[i+1][y]);
            else if(a[i][y]==a[i+1][y])
                f=false;

        }

        for(int i=x+1; i<n; i++)
        {
            if(a[i][y]=='.')
                a[i][y]=inverse(a[i-1][y]);
            else if(a[i][y]==a[i-1][y])
                f=false;

        }


        for(int i=0; i<n; i++)
        {
            for(int j=y-1; j>=0; j--)
            {
                if(a[i][j]=='.')
                    a[i][j]=inverse(a[i][j+1]);
                else if(a[i][j]==a[i][j+1])
                    f=false;
            }

            for(int j=y+1; j<m; j++)
            {
                if(a[i][j]=='.')
                    a[i][j]=inverse(a[i][j-1]);
                else if(a[i][j]==a[i][j-1])
                    f=false;
            }
        }
    }


    if(f==true)
    {
        cout<<"YES"<<endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }
    else
        cout<<"NO"<<endl;




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

