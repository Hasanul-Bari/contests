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

    int n,x,t;
    string s;
    cin>>t;

    while(t--)
    {

        cin>>n>>x>>s;

        int on=0,z=0,ini=0,c=0,co=0;

        if(x==0)
            ini=1,c++;

        vector<int> d;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                on++;
            else
                z++;

            d.pb(z-on);

            if(z-on==x)
            {
                //cout<<i<<endl;
                c++;
            }

            if(z-on==0)
                co++;


        }

        //cout<<"co = "<<co<<endl;

        int ediff=z-on;

        if(ediff==x)
        {
            cout<<-1<<endl;
        }
        else if(ediff<0)
        {
            for(int i=0; i<d.size(); i++)
            {
                if(d[i]+ediff>=0 && x%(d[i]+ediff)==0)
                    c++;
            }
            cout<<c<<endl;


        }
        else if(ediff>=0)
        {
            if(x%ediff==0)
                c++;

            for(int i=0; i<d.size(); i++)
            {
                if(x%(d[i]+ediff)==0)
                    c++;
            }
            cout<<c<<endl;


        }


    }



    return 0;
}
