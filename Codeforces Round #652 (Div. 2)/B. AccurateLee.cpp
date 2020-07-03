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
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        int lo=0,lz=0,hp=0,fz=0;

        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]=='1')
                lo++;
            else
                break;
        }

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0')
                fz++;
            else
                break;
        }


        //cout<<fz<<" "<<lo<<endl;


        if(fz+lo<n)
        {
            if((n-(fz+lo))==1)
                cout<<s<<endl;
            else
            {
                for(int i=0; i<fz; i++)
                    cout<<0;
                cout<<0;

                for(int i=0; i<lo; i++)
                    cout<<1;

                cout<<endl;


            }
        }
        else
            cout<<s<<endl;
    }




    return 0;
}
