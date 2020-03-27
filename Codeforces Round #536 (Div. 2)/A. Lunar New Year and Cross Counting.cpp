#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    char a[n+1][n+1];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i-1>0) && (j-1>0) && (i+1<=n) && (j+1<=n)  )
            {
                if((a[i][j]=='X') &&  (a[i-1][j-1]=='X') && (a[i-1][j+1]=='X') && (a[i+1][j-1]=='X') && (a[i+1][j+1]=='X') )
                {
                    //cout<<"hp"<<endl;
                    c++;
                }
            }
        }
    }

    cout<<c<<endl;
    return 0;
}
