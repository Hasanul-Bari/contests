#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster


    int n;
    cin>>n;
    string s;
    cin>>s;

    int x[10];
    for(int i=0; i<10; i++)
        x[i]=0;

    for(int i=0; i<n; i++)
    {
        if(isdigit(s[i]))
        {
            int y=s[i]-48;
            x[y]=0;
        }
        else
        {
            if(s[i]=='L')
            {
                for(int j=0; j<10; j++)
                {
                    if(x[j]==0)
                    {
                        x[j]=1;
                        break;
                    }

                }
            }

            else if(s[i]=='R')
            {
                for(int j=9; j>=0; j--)
                {
                    if(x[j]==0)
                    {
                        x[j]=1;
                        break;
                    }

                }
            }
        }

        /*for(int i=0; i<10; i++)
            cout<<x[i];
        cout<<endl;*/



    }

    for(int i=0; i<10; i++)
        cout<<x[i];
    cout<<endl;






    return 0;
}
