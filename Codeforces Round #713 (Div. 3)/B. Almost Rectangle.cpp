#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;

    char a[n][n];

    int x1,y1,x2,y2;
    x1=-1;
    y1=-1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='*')
            {
                if(x1==-1 && y1==-1)
                {
                    x1=i;
                    y1=j;
                }
                else
                {
                    x2=i;
                    y2=j;
                }
            }
        }
    }

    int x3,y3,x4,y4;

    if(x1==x2)
    {
        if(x1+1<n)
        {
            x3=x1+1;
            x4=x1+1;
            y3=y1;
            y4=y2;
        }
        else
        {
            x3=x1-1;
            x4=x1-1;
            y3=y1;
            y4=y2;
        }
    }
    else if(y1==y2)
    {
        if(y1+1<n)
        {
            y3=y1+1;
            y4=y1+1;
            x3=x1;
            x4=x2;
        }
        else
        {
            y3=y1-1;
            y4=y1-1;
            x3=x1;
            x4=x2;
        }
    }
    else
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
    }

    a[x3][y3]='*';
    a[x4][y4]='*';

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
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


