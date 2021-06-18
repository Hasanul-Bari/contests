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

    int k;
    string s;

    cin>>s>>k;
    int n=s.length();


    for(int i=0; i<(n/2); i++)
    {
        if(s[i]!=s[n-1-i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;




    return 0;
}


