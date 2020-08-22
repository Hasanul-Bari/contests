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

    set<char> ss;

    for(int i=0; i<s.length(); i++)
    {
        ss.insert(s[i]);
    }

    cout<<26-ss.size()<<endl;




    return 0;
}
