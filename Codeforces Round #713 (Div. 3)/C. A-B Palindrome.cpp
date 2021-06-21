#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int a,b;
    string s;

    cin>>a>>b>>s;

    int n=s.length();

    int z=0,o=0;
    for(int i=0; i<(n/2); i++)
    {
        if(s[i]==s[n-1-i])
        {
            if(s[i]=='0')
            {
                z=z+2;
            }
            else if(s[i]=='1')
            {
                o=o+2;
            }
        }
        else if(s[i]=='?')
        {
            s[i]=s[n-i-1];

            if(s[n-i-1]=='0')
                z=z+2;
            else
                o=o+2;
        }
        else if(s[n-1-i]=='?')
        {
            s[n-i-1]=s[i];

            if(s[i]=='0')
                z=z+2;
            else
                o=o+2;
        }
    }

    int ra=a-z;
    int rb=b-o;

    //cout<<s<<" "<<ra<<" "<<rb<<endl;

    if(ra<0)
    {
        cout<<-1<<endl;
        return;
    }
    if(rb<0)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=0; i<(n/2); i++)
    {
        if(s[i]=='?' && s[i]==s[n-1-i] )
        {
            if(rb-2>=0)
            {
                rb=rb-2;
                s[i]='1';
                s[n-i-1]='1';
            }
            else if(ra-2>=0)
            {
                ra=ra-2;
                s[i]='0';
                s[n-i-1]='0';
            }
            else
            {
                cout<<-1<<endl;
                return;
            }
        }
    }

    if(n%2!=0)
    {
        if(s[n/2]=='?')
        {
            if(rb-1>=0)
            {
                rb=rb-1;
                s[n/2]='1';

            }
            else if(ra-1>=0)
            {
                ra=ra-1;
                s[n/2]='0';

            }
            else
            {
                cout<<-1<<endl;
                return;
            }
        }
        else if(s[n/2]=='1')
            rb--;
        else
            ra--;

    }

    if(ra==0 && rb==0)
        cout<<s<<endl;
    else
        cout<<-1<<endl;





}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

