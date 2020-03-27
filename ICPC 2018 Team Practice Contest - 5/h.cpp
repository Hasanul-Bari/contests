#include<iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;
    char a[m*2+1][m];

    for(int i=0; i<m*2+1; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==m || i==0 || i==m+1 || i==m*2)
                a[i][j]='*';
            else
                a[i][j]=' ';
        }
    }

    for(int i=0; i<m*2+1; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[j];
        }
        cout<<endl;
    }
}
