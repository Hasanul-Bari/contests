#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int q;
    cin>>q;

    string s,t;

    while(q--)
    {
        cin>>s>>t;

        int x=s.length();

        bool hp=false;

        if(s==t)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            map<char,int> m;

            for(int i=0; i<x; i++)
            {
                m[s[i]]++;
            }
            for(int i=0; i<x; i++)
            {
                if(m[t[i]]!=0)
                {
                    hp=true;
                    break;
                }
            }



            if(hp==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }


    }




    return 0;
}

