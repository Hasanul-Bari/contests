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


    int prv=0,c=0;


    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]+1)
        {
            c++;
        }
        else if(i-1>=0 && s[i]+1==s[i-1])
    }




    return 0;
}
