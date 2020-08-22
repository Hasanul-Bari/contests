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

    map<char,int> m;

    for(int i=0; i<s.length(); i++)
    {
        m[s[i]]++;
    }

    if(m['m']>=1 && m['i']>=1 && m['c']>=1 && m['r']>=1 && m['o']>=1 && m['s']>=1 && m['f']>=1 && m['t']>=1)
        cout<<"We both love Microsoft!"<<endl;
        else
        cout<<"Only I love Microsoft!"<<endl;



    return 0;
}
