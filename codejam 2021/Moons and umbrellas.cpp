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

    int t,x,y,tc=1;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>x>>y>>s;


        string v;
        char p;

        for(int i=0; i<s.length(); i++)
        {
            if(i==0)
            {
                v.pb(s[i]);
            }
            else if(p=='?' && s[i]=='?')
            {

            }
            else
            {
                v.pb(s[i]);
            }

            p=s[i];

        }

        //cout<<v<<endl;

        ll ans=0;

        for(int i=1; i<v.length()-1; i++)
        {
            if(v[i]=='?')
            {
                if(v[i-1]=='C' && v[i+1]=='J')
                {
                    ans=ans+x;
                }
                else if(v[i-1]=='J' && v[i+1]=='C')
                {
                    ans=ans+y;
                }
            }
            else if(v[i-1]=='C' && v[i]=='J')
                ans=ans+x;
            else if(v[i-1]=='J' && v[i]=='C')
                ans=ans+y;

            //cout<<ans<<endl;


        }

        if(v.length()>=2 && v[v.length()-1]=='C' && v[v.length()-2]=='J')
        {
            ans=ans+y;
        }
        else if(v.length()>=2 && v[v.length()-1]=='J' && v[v.length()-2]=='C')
        {
            ans=ans+x;
        }




        cout<<"Case #"<<tc<<": "<<ans<<endl;
        tc++;
    }




    return 0;
}

