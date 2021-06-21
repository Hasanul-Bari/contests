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

    int t,n;
    cin>>t;


    string s;


    while(t--)
    {
        cin>>n>>s;
        int cc=0;
        int i=0,id;
        for(char c : s)
        {
            if(c=='a')
                cc++;

            if(c!='a')
                id=i;

            i++;

        }

        if(cc==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool p=true;
            int ps=-1,ps2=-1;
            for(int i=0; i<(n/2); i++)
            {
                if(s[i]!=s[n-i-1])
                {
                    p=false;
                    break;
                }

            }

            if(p==true)
            {
                cout<<"YES"<<endl;
                cout<<"a";
                cout<<s<<endl;
            }
            else
            {
                cout<<"YES"<<endl;

                id=n-1-id;


                for(int i=0; i<s.length(); i++)
                {
                    if(i==id)
                    {
                        if(id<(n/2))
                        {
                            cout<<"a"<<s[i];
                        }
                        else
                        {
                            cout<<s[i]<<"a";
                        }
                    }
                }
                cout<<endl;


            }



        }



    }




    return 0;
}
