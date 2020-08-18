#include<iostream>
using namespace std;

int main()
{
    long long n,s;
    cin>>n>>s;

    if(s%n==0)
        s=s/n;
    else
        s=(s/n)+1;

    cout<<s<<endl;
    return 0;
}
