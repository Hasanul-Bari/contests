#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int a,b,c;
    cin>>a>>b>>c;

    int x=max(0, (max(b,c)-a)+1);
    int y=max(0,(max(a,c)-b)+1);
    int z=max(0, (max(a,b)-c)+1);

    cout<<x<<" "<<y<<" "<<z<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


