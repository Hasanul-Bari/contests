#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



void solve(int tc)
{
    ll n,m,k;

    cin>>n>>m>>k;

    if((m-1)+(n-1)*m==k)
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


