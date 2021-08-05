#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{

    int s;
    cin>>s;

    int x=0,i=1,c=0;

    while(x+i<=s)
    {
        c++;
        x=x+i;
        i=i+2;
    }

    if(x<s)
    {
        c++;
    }

    cout<<c<<endl;
}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


