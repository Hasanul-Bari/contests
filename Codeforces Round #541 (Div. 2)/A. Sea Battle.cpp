#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long w1,h1,w2,h2,ans=0;
    cin>>w1>>h1>>w2>>h2;

    ans=h1+h2+2;
    ans=ans+(w1+1)+(w2+1)+(h1+h2)+abs(w1-w2);

    cout<<ans<<endl;
    return 0;

}
