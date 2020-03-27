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
    int n;
    string s;

    cin>>n>>s;

    if(n%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }

    int o=0, e=0,hp=0,ss=0;


    for(int i=0; i<n; i++)
    {
        if(e>o)
            hp=1;
        else
            hp=0;


        if(s[i]=='(')
            o++;
        else
            e++;


        if(o==e)
        {
            if(hp==1)
            {
                ss=ss+(o*2);
            }
            o=0,e=0;
        }

        //cout<<i<<" ** "<<ss<<endl;


    }
    if(o!=e)
        cout<<-1<<endl;
    else

        cout<<ss<<endl;




    return 0;
}
