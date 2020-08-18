#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2;
    char c1,c2;
    cin>>h1>>c1>>m1>>h2>>c2>>m2;

    int x=(h1*60)+m1;
    int y=(h2*60)+m2;

    y=y-x;
    //cout<<y<<endl;

    y=y/2;

    y=m1+y;

    int m=y%60;
    int h=h1+(y/60);

    if(h<=9 && m>9)
        cout<<0<<h<<":"<<m<<endl;
    else if(m<=9 && h>9)
        cout<<h<<":"<<0<<m<<endl;
    else if(h<=9 && m<=9)
        cout<<0<<h<<":"<<0<<m<<endl;
    else
        cout<<h<<":"<<m<<endl;




    return 0;
}

