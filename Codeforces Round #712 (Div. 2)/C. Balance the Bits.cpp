#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    string s;

    cin>>n>>s;


    string s1,s2;
    int z=0,o=0;
    for(int i=0; i<n; i++)
    {
        z=z+(1-(s[i]-48));
        o=o+(s[i]-48);
    }

    if(z%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(o%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }

    int oc=0,zz=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            oc++;

            if(oc<=(o/2))
            {
                s1.pb('(');
                s2.pb('(');
            }
            else
            {
                s1.pb(')');
                s2.pb(')');
            }
        }
        else
        {
            if(zz%2==0)
            {
                s1.pb(')');
                s2.pb('(');
            }
            else
            {
                s1.pb('(');
                s2.pb(')');
            }
            zz++;
        }
    }

    if(s[0]=='1' && s[n-1]=='1')
        cout<<"YES"<<endl<<s1<<endl<<s2<<endl;
    else
        cout<<"NO"<<endl;
    return;
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
