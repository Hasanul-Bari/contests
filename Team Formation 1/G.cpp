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

    while(cin>>s)
    {

        int x=s.length();

        int p=-1;
        for(int i=x-1,j=0; i>j; )
        {

            cout<<s[i]<<" ** "<<s[j]<<" * "<<i<<endl;
            if(s[i]!=s[j])
            {
                p=j;
                j++;
            }
            else
            {
                i--;
                j++;
            }

            //cout<<s[j]<<"***"<<endl;
        }

        cout<<p<<endl;

        cout<<s;
        if(p!=-1)
        {
            for(int i=p; i>=0; i--)
                cout<<s[i];
        }
        cout<<endl;


    }




    return 0;
}
