#include<iostream>
using namespace std;
int a[100];
int main()
{
    int n,m,b,x,y,k=0;
    cin>>n>>m;


    for(int j=0; j<n; j++)
    {
        cin>>x>>y;
        for(int i=x; i<=y; i++)
        {
            a[i]=i;
        }

    }
    for(int i=1; i<=m; i++)
    {
       if(a[i]==0)
       {
           k++;
       }
    }
    cout<<k<<endl;

    for(int i=1; i<=m; i++)
    {
       if(a[i]==0)
       {
           cout<<i<<endl;
       }
    }

    return 0;

}


