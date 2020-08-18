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

    int x=s.length(),xx;
    xx=x-1;

    if(x%2==0)
        x=x/2;
    else
        x=(x/2)+1;


    int c=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]!=s[xx-i])
            c++;

        //cout<<s[i]<<" "<<s[xx-i]<<endl;

    }

    cout<<c<<endl;





    return 0;
}
