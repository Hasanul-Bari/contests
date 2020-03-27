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
    char a[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }

    int c=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]=='.')
            {
                if( (i+1>=0 && i+1<=n) && (i+2>=0 && i+2<=n) && (j+1>=0 && j+1<=n) && (j-1>=0 && j-1<=n) )
                {
                    if(a[i+1][j-1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='.' && a[i+2][j]=='.')
                    {
                        a[i][j]='#';
                        a[i+1][j-1]='#';
                        a[i+1][j]='#';
                        a[i+1][j+1]='#';
                        a[i+2][j]='#';

                    }

                }

            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            //cout<<a[i][j];
            if(a[i][j]=='.')
            {
                c=1;
                break;
            }
        }
        if(c==1)
            break;

        //cout<<endl;

    }



    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;




    return 0;
}
