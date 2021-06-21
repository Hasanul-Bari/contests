#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    string s;
    int d;

    cin>>s>>d;

    bool f=false;
    string dec,flt;
    int last=-1;
    char imd='0';

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            int cnt=0,j;

            for(j=i+1; j<s.length(); j++)
            {
                cnt++;

                if(j==i+1)
                    imd=s[j];

                flt.pb(s[j]);

                if(cnt==d)
                    break;
            }

            if(j+1<s.length())
            {
                last=s[j+1]-'0';
            }

            for(int j=cnt+1; j<=d; j++)
            {
                flt.pb('0');
            }


            break;

        }

        if(f==true)
        {
            dec.pb(s[i]);
        }
        else if(s[i]!='0' && f==false)
        {
            f=true;
            dec.pb(s[i]);
        }



    }
    //cout<<last<<endl;

    for(int j=flt.size()-1; j>=0; j--)
    {

        if(last<5)
            break;

        //cout<<flt[j]<<" -- ";

        flt[j]++;

        //cout<<flt[j]<<endl;

        last=0;
        break;
    }

    //cout<<last<<endl;

    if(dec.size()==0)
        dec.pb('0');

    if(d==0)
    {
        last=imd-'0';
    }


    for(int j=dec.size()-1; j>=0; j--)
    {

        if(last<5)
            break;


        dec[j]++;



        last=0;
        break;
    }

    if(d==0)
    {
        cout<<dec<<endl;
    }
    else
    {
        cout<<dec<<"."<<flt<<endl;
    }








    //cout<<dec<<" ** "<<flt<<endl;
}


int main()
{
    faster

    int t;
    cin>>t;


    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

