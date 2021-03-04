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
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        for(int i=0; i<s.length(); i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                    s[i]='b';
                else
                    s[i]='a';
            }
            else
            {
                if(s[i]=='z')
                    s[i]='y';
                else
                    s[i]='z';
            }
        }

        cout<<s<<endl;
    }






    return 0;
}
