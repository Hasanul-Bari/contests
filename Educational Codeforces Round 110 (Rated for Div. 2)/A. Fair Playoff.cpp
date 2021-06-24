#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int s1,s2,s3,s4;

    cin>>s1>>s2>>s3>>s4;

    if(min(s1,s2)<max(s3,s4) && min(s3,s4)<max(s1,s2) )

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

