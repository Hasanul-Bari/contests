#include<iostream>
using namespace std;

int n;
int b[50][50];

bool canplace(int row, int col)
{
    //check left
    for(int i=col-1; i>=0; i--)
    {
        if(b[row][i]==1)
        {
            return false;
        }
    }

    //check upper diagonal
    for(int i=row,j=col; i>=0 && j>=0; i--,j--)
    {
        if(b[i][j]==1)
        {
            return false;
        }
    }

    //check lower diagonal
    for(int i=row,j=col; i<n && j>=0; i++,j--)
    {
        if(b[i][j]==1)
        {
            return false;
        }
    }


    return true;
}

bool solve(int col)
{
    if(col==n)
    {
        return true;
    }

    for(int i=0; i<n; i++)
    {
        if(canplace(i,col))
        {
            b[i][col]=1;

            if(solve(col+1))
            {
                return true;
            }

            b[i][col]=0;
        }
    }

    return false;
}

int main()
{
    cin>>n;


    if(solve(0))
    {
        //cout<<"Solution Exists"<<endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Not possible"<<endl;
    }

    return 0;
}
