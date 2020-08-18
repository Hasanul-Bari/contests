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

    int t;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        int x=s.length();

        int c=0,mx=0;
        for(int i=0; i<x; i++)
        {
            if(s[i]=='L')
            {
                c++;
            }
            else
            {
                if(mx<c)
                    mx=c;

                c=0;
            }
        }
        if(mx<c)
            mx=c;

        cout<<mx+1<<endl;
    }




    return 0;
}
