#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long *a=new long long[n];
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(long long i=0; i<n; i++)
    {
        if(a[i]%2==0)
            a[i]=a[i]-1;
    }

    for(long long i=0; i<n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;

    return 0;

}




