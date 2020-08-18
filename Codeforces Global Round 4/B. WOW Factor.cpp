#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    cin>>s;

    ll x=s.length(),v=0,o=0;



    for(int i=0; i<x-1; i++)
    {
        if(s[i]=='v' && s[i+1]=='v')
        {
            v++;
        }

    }

    //cout<<v<<endl;

    ll vv=0,ss=0;

    for(int i=0; i<x-1; i++)
    {
        if(s[i]=='v' && s[i+1]=='v')
        {
            vv++;
        }

        if(s[i]=='o')
        {
            ss=ss+(vv*(v-vv));
        }

    }

    cout<<ss<<endl;




    return 0;
}
