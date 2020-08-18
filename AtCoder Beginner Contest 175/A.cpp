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

    string s;
    cin>>s;

    if(s[0]=='R' && s[1]=='R' && s[2]=='R')
        cout<<3<<endl;
    else if( (s[0]=='R' && s[1]=='R') || (s[1]=='R' && s[2]=='R') )
        cout<<2<<endl;
    else if(s[0]=='R' || s[1]=='R' || s[2]=='R')
        cout<<1<<endl;
    else
        cout<<0<<endl;




    return 0;
}
