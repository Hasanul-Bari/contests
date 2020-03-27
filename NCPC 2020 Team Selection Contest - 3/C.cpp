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

    string s,t;
    cin>>s>>t;

    int x=s.length(),y=t.length();

    int c=0;
    bool hp=true;
    for(int i=0; i<y; i++)
    {
        if(s[i]==t[i])
        {
            c++;
            hp=false;
            break;
        }
    }

    if(hp==true)
    {
        cout<<c+1<<endl;
        return 0;
    }


    for(int j=y,k=1; j<x; j++,k++)
    {

        hp=true;
        for(int i=0; i<y; i++)
        {
            if(t[i]==s[k+i])
            {
                cout<<t[i]<<" ** "<<s[k+i]<<endl;
                c=k;
                hp=false;
                break;
            }

        }

        if(hp==true)
        {
            cout<<c+1<<endl;
            return 0;
        }
    }




    return 0;
}

