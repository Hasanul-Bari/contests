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


    int x=s.length();

    int l=0,p=0;

    for(int i=0; i<x; i++)
    {
        if(s[i]=='L')
        {
            if(i+2<x && s[i+1]=='S' && s[i+2]=='C')
                l++;

        }

        if(s[i]=='P')
        {
            if(i+3<x && s[i+1]=='C' && s[i+2]=='M' && s[i+3]=='S')
                p++;

        }
    }

    if(l>p)
        cout<<"LSC"<<endl;
    else if(p>l)
        cout<<"PCMS"<<endl;
    else
    cout<<"Tie"<<endl;




    return 0;
}

