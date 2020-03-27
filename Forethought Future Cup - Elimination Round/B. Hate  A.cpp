#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    string s,h;
    cin>>s;


    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='a')
        {
            h=h+s[i];
        }

    }

    //cout<<h<<endl;

    int hl=h.length();

    if(hl%2==0)
    {
        //hl=hl/2;

        /*string h1,h2;

        for(int i=0; i<hl; i++)
        {
            h1=h1+h[i];
        }

        for(int i=hl; i<hl+hl; i++)
        {
            h2=h2+h[i];
        }*/

        //cout<<h1<<" "<<h2<<endl;




        bool c=true,c1=true;
        for(int i=hl-1, j=s.length()-1; i>=(hl/2); i--,j--)
        {
            if(s[j]!=h[i])
            {
                c=false;
            }

            if(h[i]!=h[i-(hl/2)])
            {
                c1=false;
            }
        }

        if(c==true && c1==true)
        {
            for(int i=0; i<s.length()-(hl/2); i++)
            {
                cout<<s[i];
            }
            cout<<endl;

        }
        else
        {
            cout<<":("<<endl;

        }


    }
    else
        cout<<":("<<endl;





    return 0;
}
