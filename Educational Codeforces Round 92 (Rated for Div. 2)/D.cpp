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

    int n;
    string s;

    cin>>n>>s;
    int r=0,rr=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
            r++;
    }

    for(int i=0; i<r; i++)
    {
        if(s[i]=='R')
            rr++;
    }

    cout<<r-rr<<endl;








    return 0;
}
