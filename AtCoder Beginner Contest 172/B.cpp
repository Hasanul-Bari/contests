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

    string s,t;

    cin>>s>>t;
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=t[i])
            c++;
    }

    cout<<c<<endl;




    return 0;
}

