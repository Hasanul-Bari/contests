#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long x,y,c,m=0;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        long long m1=x+y;
        if(m1>m)
        {
            m=m1;

        }

    }

    cout<<m<<endl;
    return 0;
}
