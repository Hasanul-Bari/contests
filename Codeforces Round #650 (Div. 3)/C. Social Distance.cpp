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

    int t,k,n;

    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        cin>>s;

        int ls=-1,vc,ans=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                if(ls==-1)
                {
                    vc=i;

                    vc=vc-(k);

                    if(vc<0)
                        vc=0;
                }
                else
                {
                    vc=(i-ls)-1;

                    vc=vc-(2*k);

                    if(vc<0)
                        vc=0;
                }


                //cout<<vc<<" vc"<<endl;



                //cout<<vc<<" vc final"<<endl;

                ans=ans+(vc/(k+1));

                if(vc%(k+1)!=0)
                    ans++;

                ls=i;
            }
        }

        if(ls==-1)
        {
            vc=s.length();
        }

        else
        {
            vc=(s.length()-ls)-1;

            vc=vc-(k);

            if(vc<0)
                vc=0;
        }


        ans=ans+(vc/(k+1));

        if(vc%(k+1)!=0)
            ans++;




        cout<<ans<<endl;
    }




    return 0;
}
