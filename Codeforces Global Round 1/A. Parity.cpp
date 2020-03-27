#include<bits/stdc++.h>
#define  ll  long long
using namespace std;

int main()
{

    double b,k,x;
    ll s=0;
    cin>>b>>k;

    for(int i=1; i<=k; i++)
    {
        cin>>x;
        ll y=ceil(pow(b,k-i));
        s=s+(x*y);
        cout<<(ll)(x*y)<<" * "<<endl;

    }

    if(s%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;

   //cout<<s<<endl;

   return 0;
}
