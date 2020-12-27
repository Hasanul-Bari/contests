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

    int t,n;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>n>>s;

        string s1,s2;

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                s1.pb('1');
                s2.pb('0');
            }
            else
            {
                s1.pb('0');
                s2.pb('1');
            }
        }

        //cout<<s1<<" "<<s2<<endl;

        int c1=0,c2=0;

        if(s[0]!=s1[0])
            c1++;

        if(s[0]!=s2[0])
            c2++;

        for(int i=1; i<n; i++)
        {

            if(s[i]!=s1[i] && s[i-1]==s1[i-1])
                c1++;

            if(s[i]!=s2[i] && s[i-1]==s2[i-1])
                c2++;

        }

        cout<<min(c1,c2)<<endl;
    }




    return 0;
}

