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

    int a[26];

    while(t--)
    {
        cin>>s;

        int n=s.length();

        ll c=0;

        if(n>1)
        {

            for(int i=0; i<s.length(); i++)
            {
                if(i+1<n && s[i]==s[i+1] && isalpha(s[i+1]))
                {
                    s[i+1]='-';
                    c++;
                }
                if(i+2<n && s[i]==s[i+2] && isalpha(s[i+2]))
                {
                    s[i+2]='+';
                    c++;
                }

                //cout<<s[i]<<endl;


            }


            cout<<c<<endl;

        }
        else
            cout<<0<<endl;

    }




    return 0;
}
