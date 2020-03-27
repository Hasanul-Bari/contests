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

    int t,h,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;



        int ans=(23-h)*60;

        ans=ans+(60-m);

        cout<<ans<<endl;
    }




    return 0;
}
