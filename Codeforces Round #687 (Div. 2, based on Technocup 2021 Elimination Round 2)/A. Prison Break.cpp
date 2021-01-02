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

    int t,n,m,r,c;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>r>>c;

        int p=max(r-1,n-r);
        int q=max(c-1,m-c);

        cout<<p+q<<endl;
    }




    return 0;
}
