#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
if(n%2==0)x=n;
    else x=n+1 ;

    int y=2*n+1;


for(int i=0;i<n;i++)
{
    for(int j=0;j<y;j++)
    {
        if(j==x)cout<<" ";
        else if(i==0&&j>0&&j<n-1)cout<<" ";
        else if((i>0&&i<n-1&&j>0&&j<n-1)||(i>0&&i<n-1&&j>n+1&&j<y-1))cout<<" ";
        else if(i==n-1&&j>n+1&&j<y-1)cout<<" ";
        else cout<<"*";


    }cout<<endl;
}



    return 0;
}
