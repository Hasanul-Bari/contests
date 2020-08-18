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

    int c=0,c1=0;
    for(int i=0; i<3; i++)
    {
        if(s[i]=='A')
            c++;
        else
            c1++;
    }

    if(c>0 && c1>0)
        cout<<"Yes\n";
    else
    cout<<"No\n";




    return 0;
}
