#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,c1=0,c2=0,c3=0;
    cin>>x>>y>>z>>a>>b>>c;


    if(x<=a)
    {
        c1=1;
    }
    else
        c1=0;

    a=a-x;



    if(y<=(a+b))
    {
        if(y>=a)
        {
            y=y-a;
            a=0;
        }
        else
        {
            a=a-y;
            y=0;
        }
        y=y-a;
        if(y>0)
        {
            if(y>=b)
            {
                y=y-b;
                b=0;
            }
            else
            {
                b=b-y;
                y=0;
            }
            y=y-b;
        }
        //cout<<"y= "<<y<<endl;
        if(y>0)
            c2=0;

        else
            c2=1;


    }
    else
        c2=0;


    if(z<=(a+b+c))
        c3=1;
    else
        c3=0;

    //cout<<c1<<" "<<c2<<" "<<c3<<endl;

    if(c1==1 && c2==1 && c3==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;





}
