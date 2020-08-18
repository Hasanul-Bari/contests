#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    ll a[3],d;
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    cin>>d;

    ll ans =0;

    if(abs(a[1]-a[0])<d)
    {
        ans=ans+(d-abs(a[1]-a[0]));
    }

    if(abs(a[2]-a[1])<d)
    {
        ans=ans+(d-abs(a[2]-a[1]));
    }

    cout<<ans<<endl;







    return 0;
}
