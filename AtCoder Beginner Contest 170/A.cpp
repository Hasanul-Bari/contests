#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    int x,ans;

    for(int i=1; i<=5; i++)
    {
        cin>>x;

        if(x==0)
            ans=i;
    }

    cout<<ans<<endl;




    return 0;
}
