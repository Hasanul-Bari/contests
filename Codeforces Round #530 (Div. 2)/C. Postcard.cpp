#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,h;
    int k,c=0,sn=0,x=0;
    cin>>s>>k;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='?')
            c++;
        else if(s[i]=='*')
            sn++;
        else
            x++;
    }

    //cout<<c<<" "<<sn<<" "<<x<<" "<<endl;

    if(x==k)
    {
        for(int i=0; i<s.length(); i++)
        {
            if( s[i]!='?' && s[i]!='*' )
            {
                h=h+s[i];
            }


        }
        cout<<h<<endl;
        return 0;
    }



    else if(x>k)
    {
        int rem=x-k;
        if(rem>(c+sn))
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        int hp=0;

        for(int i=0; i<s.length(); i++)
        {
            if( (s[i]=='?' || s[i]=='*' ) && hp<rem)
            {
                s.erase(i-1,1);
                hp++;
            }


        }

        for(int i=0; i<s.length(); i++)
        {
            if( s[i]!='?' && s[i]!='*' )
            {
                h=h+s[i];
            }


        }
        cout<<h<<endl;
        return 0;
    }

    else
    {
        int add=k-x;
        if(sn==0)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        int hp=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='*' && hp==0)
            {
                while(add--)
                {
                    h=h+s[i-1];
                }
                hp=1;
            }

            if( s[i]!='?' && s[i]!='*' )
            {
                h=h+s[i];
            }

        }
        cout<<h<<endl;
        return 0;

    }



}
