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

        int f=0,th=0,ans=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='('){
                f++;
            }
            else if(s[i]=='['){
                th++;
            }
            else if(s[i]==')'){
                if(f!=0)
                {
                    f--;
                    ans++;
                }
            }
            else if(s[i]==']'){
                if(th!=0)
                {
                    th--;
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    }




    return 0;
}
