#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll  ts,d,rs=0,x;
    cin>>ts>>d;

    for(int i=0; i<7; i++)
    {
        cin>>x;
        rs=rs+x;
    }

    cout<<"Case "<<tc<<": "<<ts-rs<<endl;
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

