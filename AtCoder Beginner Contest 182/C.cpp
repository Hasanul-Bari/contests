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

    string s;
    cin>>s;

    int sm=0;



    for(int i=0; i<s.length(); i++)
    {
        sm=sm+(s[i]-48);
    }

    //cout<<sm<<endl;

    if(sm%3==0)
    {
        cout<<0<<endl;
        return 0;
    }

    if(s.length()==1)
    {
        cout<<-1<<endl;
        return 0;
    }


    for(int i=0; i<s.length(); i++)
    {
        if (sm%3== (s[i]-48)%3)
        {
            cout<<1<<endl;
            return 0;
        }

    }


    if (s.length()==2)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<2<<endl;




    return 0;
}
