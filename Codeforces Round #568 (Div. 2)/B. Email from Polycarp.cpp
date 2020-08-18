#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int k;
    string s,t;
    cin>>k;
    while(k--)
    {


        cin>>s>>t;

        int x=t.length();
        int y=s.length();

        if(y>x)
            cout<<"NO"<<endl;
        else
        {


            int j=0,hp=0;
            for(int i=0; i<x;)
            {
                //cout<<t[i]<<endl;
                if(j==y)
                {
                    /*if(t[i]!=s[y-1])
                    {
                        hp=1;
                        break;
                    }
                    else
                        i++;*/
                    j--;

                }




                if(i==0)
                {
                    if(s[j]!=t[i])
                    {
                        hp=1;
                        break;
                    }
                    else
                    {
                        j++;
                        i++;
                    }
                }
                else
                {
                    if(s[j]!=t[i])
                    {
                        /*if(t[i]!=t[i-1])
                        {
                            hp=1;
                            break;
                        }
                        else*/
                        i++;
                    }
                    else
                    {
                        j++;
                        i++;
                    }
                }

            }

            /*if(j!=y)
                hp=1;*/

            //cout<<j<<endl;
            if(hp==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

    }




    return 0;
}
