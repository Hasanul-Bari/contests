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

    int n,c=0;
    string s;
    cin>>n>>s;

    char t;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            c++;
        }
        else if(s[i]!=t)
        {
            c++;
        }

        t=s[i];
    }

    cout<<c<<endl;




    return 0;
}
