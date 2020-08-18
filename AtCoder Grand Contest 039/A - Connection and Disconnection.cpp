#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    string s;
    ll k,c=0;
    cin>>s>>k;

    int x=s.length();

    for(int i=0; i<x-1; i++)
    {
        if(s[i]==s[i+1])
        {
            s[i+1]='.';
            c++;

        }
    }
    ll p=0;
    if(s[0]==s[x-1])
        p=1;

    //cout<<c<<" "<<p<<endl;

    ll ans=(c*k)+(p*(k-1));

    cout<<ans<<endl;






    return 0;
}
