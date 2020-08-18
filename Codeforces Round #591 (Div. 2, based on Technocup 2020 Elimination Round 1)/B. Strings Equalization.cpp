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

        bool hp=true;

        if(s==t)
        {
            cout<<"YES"<<endl;
        }
        else if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<x-1; i++)
            {

                if(i==0)
                {
                    if(s[i]!=t[i])
                    {
                        if(s[i]!=t[i+1] && t[i]!=s[i+1])
                            hp=false;
                    }

                }
                else
                {
                    if(s[i]!=t[i])
                    {
                        if(s[i]!=t[i+1] && s[i]==t[i-1]  && t[i]!=s[i+1]  || t[i]!=s[i-1])
                            hp=false;

                    }

                }

                //cout<<hp<<" *** "<<i<<endl;
            }
            int i=x-1;
            if(s[i]!=t[i])
            {
                if(s[i]!=t[i-1] && t[i]!=s[i-1])
                            hp=false;


            }

            //cout<<hp<<endl;
            if(hp==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }


    }




    return 0;
}
