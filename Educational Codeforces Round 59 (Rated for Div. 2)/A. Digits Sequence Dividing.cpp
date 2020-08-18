#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,t,h,p;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>s;

        vector<int> v;
        h=s[0]-48;
        p=s[1]-48;
        for(int i=2; i<s.length(); i++)
        {
            p=(p*10)+(s[i]-48);
        }


        if(h<p)
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<h<<" "<<p<<endl;
        }
        else
            cout<<"NO"<<endl;

        /*for(int i=1; i<s.length(); i++)
        {
            if(h==0)
            {
                p=s[i]-48;
                h=1;
            }

            else
                p=(p*10)+(s[i]-48);


            if(c<p)
            {
                v.push_back(p);
                c=p;

                h=0;
            }

            cout<<c<<" "<<p<<endl;


        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        cout<<endl;*/

    }






    return 0;
}


