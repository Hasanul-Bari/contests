#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,y=0,r=0;
    char a,b;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>a>>b;
        if(a=='s' && b=='a')
            y=y+1;
        else if(a=='s'  && b=='r')
            r=r+1;
        else if(a=='c' && b=='r')
            r=r+2;
        else if(a=='c' && b=='a')
            y=y+3;
    }
    cout<<y<<" "<<r<<endl;
    return 0;
}
