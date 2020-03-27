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

    int c=0;

    for(int i=0; i<n-2; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
            c++;
    }


    cout<<c<<endl;



    return 0;
}
