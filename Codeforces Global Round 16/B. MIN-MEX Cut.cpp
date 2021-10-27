#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    string s;
    cin>>s;

    bool f1=false,f2=false,f3=false;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            if(f1==false)
            {
                f1=true;
            }
            else if(f2==true && f3==false)
            {
                f3=true;
            }
        }
        else if(s[i]=='1')
        {
            if(f1==true && f2==false)
            {
                f2=true;
            }
        }

        if(f3==true)
        {
            break;
        }

    }

    if(f1==true && f2==true && f3==true)
    {
        cout<<2<<endl;
    }
    else if(f1==true)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}



