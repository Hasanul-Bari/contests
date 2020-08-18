#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int ans=1;

    for(int i=n-1; i>0; i--)
        ans=ans+((i*4));

    cout<<ans<<endl;




    return 0;
}
