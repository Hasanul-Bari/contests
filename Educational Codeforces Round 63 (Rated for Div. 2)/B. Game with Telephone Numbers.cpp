#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    string s;
    cin>>n>>s;

    int c=0,hp=0,pos=-1,e=0;

    int r=n-11;
    r=r/2;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='8')
        {
            c++;
            if(c>r && hp==0)
            {
                pos=i;
                hp=1;
            }


        }



    }
    //cout<<c<<endl;
    //cout<<pos<<endl;
    //cout<<r<<endl;



    if(pos==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        pos=pos-r;
        //cout<<pos<<endl;
        if(pos>r)
        {
            cout<<"NO"<<endl;

        }
        else
            cout<<"YES"<<endl;

    }




    return 0;
}

/*
7380011823344

7830011823344

*/
