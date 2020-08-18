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

    ll t,k=1;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        ll x=s.length();

        ll tmp=0,c=0;
        cout<<"Case #"<<k<<": ";
        k++;
        for(int i=0; i<x; i++)
        {
            int p=s[i]-48;
            //cout<<p<<" ** "<<c<<endl;

            if(p>=tmp)
            {
                c=c+(p-tmp);
                //cout<<c<<endl;
                for(int i=0; i<p-tmp; i++)
                    cout<<"(";
                cout<<s[i];
            }
            else
            {
                //cout<<"enter\n";

                c=c-(tmp-p);

                for(int i=0; i<tmp-p; i++)
                    cout<<")";
                cout<<s[i];

            }
            //cout<<endl;

            tmp=p;
        }

        for(int i=0; i<c; i++)
            cout<<")";


        cout<<endl;
    }




    return 0;
}
