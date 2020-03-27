#include<iostream>
using namespace std;

int main()
{
    long long m,n;
    cin>>n>>m;

    long long c=0;

    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=m; j++)
        {
            if((i+j)%5==0)
                c++;
        }
    }

    cout<<c<<endl;
    return 0;
}
