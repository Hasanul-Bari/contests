#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll r,b, d;

    cin>>r>>b>>d;

    if(r>b)
        swap(r,b);

    if(r*(1+d)>=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

