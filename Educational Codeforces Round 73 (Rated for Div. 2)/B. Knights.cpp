#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    char c[n+1][n+1];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0)
            {
                if(j%2==0)
                {
                    c[i][j]='W';
                }
                else
                {
                    c[i][j]='B';
                }
            }
            else
            {
                if(c[i-1][j]=='W')
                {
                    c[i][j]='B';
                }
                else if(c[i-1][j]='B')
                {
                    c[i][j]='W';
                }
            }

            cout<<c[i][j];
        }

        cout<<endl;
    }





    return 0;
}

