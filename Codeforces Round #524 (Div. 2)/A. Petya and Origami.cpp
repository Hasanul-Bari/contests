#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,r,g,b;
    cin>>n>>k;

    r= ((n*2)/k);
    g= ((n*5)/k);
    b= ((n*8)/k);

    if((n*2)%k!=0)
        r++;
    if((n*5)%k!=0)
        g++;
    if((n*8)%k!=0)
        b++;


    //cout<<r<<" "<<g<<" "<<b<<endl;
    cout<<r+g+b<<endl;
    return 0;

}
