#include<iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if(a==0)
        return b;
    return gcd(b % a, a);
}


int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        long long a[n],sum=0,x=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            x=gcd(a[i],x);
        }

        cout<<sum<<" "<<x<<endl;
    }

    return 0;
}
