#include<iostream>
using namespace std;

int main()
{
    int n;
    long long l,a,x=0,br=0;
    cin>>n>>l>>a;

    for(int i=0; i<n; i++)
    {
        long long  t1,l1;
        cin>>t1>>l1;

        br=br+(t1-x)/a;
        //cout<<br<<endl;
        x=t1+l1;
    }
    br=br+(l-x)/a;
    cout<<br<<endl;

    return 0;
}
