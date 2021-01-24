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

        int p=-1;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x=s[i]-'0';

            if(p==-1)
            {
                v.pb(1);

                p=x+1;
            }
            else
            {
                if(p==2)
                {
                    if(x==1)
                    {
                        p=1;
                        v.pb(0);
                    }
                    else if(x==0)
                    {
                        p=1;
                        v.pb(1);
                    }
                }
                else if(p==1)
                {
                    if(x==1)
                    {
                        p=2;
                        v.pb(1);
                    }
                    else if(x==0)
                    {
                        p=0;
                        v.pb(0);
                    }
                }
                else if(p==0)
                {
                    if(x==1)
                    {
                        p=2;
                        v.pb(1);
                    }
                    else if(x==0)
                    {
                        p=1;
                        v.pb(1);
                    }
                }
            }


        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;
    }




    return 0;
}




