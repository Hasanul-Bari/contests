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

        int c=0;

        for(int i=1; i<s.length(); i++)
        {
            if(s[i]=='1' && s[i-1]=='1' && c==0)
                c++;


            else if(s[i]=='0' && s[i-1]=='0' && c==1)
                c++;

            //cout<<c<<" "<<s[i]<<" "<<s[i-1]<<endl;

        }

        if(c==2)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }




    return 0;
}

