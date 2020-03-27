#include<iostream>
using namespace std;

int main()
{
    long long n,s,x=0;
    cin>>n>>s;

    long long y=n;

    while(y!=0 && s!=0 && x!=s )
    {
        int m=s/y;
        if(m>0)
        {
            x=x+m;
            s=s-m*y;
        }
        y--;
    }
    cout<<x<<endl;
    return 0;


}
