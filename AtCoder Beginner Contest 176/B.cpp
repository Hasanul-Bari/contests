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

    //cout<<'0'-48<<endl;

    ll ss=0;
    for(int i=0; i<s.length(); i++)
    {
        ss=ss+(s[i]-48);
    }

    if(ss%9==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    return 0;
}

