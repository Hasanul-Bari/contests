#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0,hp=0;
    int x=s.length();
    for(int i=0; i<x-1; )
    {

        if(s[i]==s[i+1])
        {
            s.erase(i,1);
            s.erase(i,1);
            c++;
            hp=1;
            if(i-2>=0)
                i=i-2;
            else
                i=0;
            //cout<<s<<endl;
        }
        x=s.length();
        if(hp==1)
            hp=0;
        else
            i++;

    }

    if(c%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    //cout<<c<<endl;


    return 0;
}

