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

    int t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        if(s.length()%2!=0)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            int f,l;

            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='(' )
                {
                    f=i;
                }
                else if(s[i]==')')
                {
                    l=i;
                }

            }

            if(l<f)
            {
                if(l==0)
                    cout<<"NO"<<endl;
                else if(f==s.length()-1)
                    cout<<"NO"<<endl;

                else
                    cout<<"YES"<<endl;

            }

            else
            {

                cout<<"YES"<<endl;
            }


        }


    }




    return 0;
}
