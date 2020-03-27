#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long z;
    long long max=0;
    for(int i=0;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        if(x*y>max)

        {
        max=x*y;z=y+x;
        }

    }
    cout<<z<<endl;
    return 0;
}
