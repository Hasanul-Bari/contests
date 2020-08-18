#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int a,b;
    cin>>a>>b;

    int m=a*b;
    int ad=a+b;
    int s=a-b;

    int ans=max(m,max(ad,s));
    cout<<ans<<endl;




    return 0;
}
