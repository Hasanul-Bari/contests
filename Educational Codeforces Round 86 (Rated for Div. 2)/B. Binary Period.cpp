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

        int x=s.length();

        int z=0,o=0;

        for(int i=0; i<x; i++)
        {
            if(s[i]=='0')
                z++;
            else if(s[i]=='1')
                o++;

        }

        if(z==x)
            cout<<s<<endl;
        else if(o==x)
            cout<<s<<endl;
        else
        {
            if(s[0]=='0')
            {
                for(int i=0; i<x; i++)
                {
                    cout<<"01";
                }
                cout<<endl;
            }
            else if(s[0]=='1')
            {
                for(int i=0; i<x; i++)
                {
                    cout<<"10";
                }
                cout<<endl;
            }
        }
    }




    return 0;
}
