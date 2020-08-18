#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int a,b,c;
    cin>>a>>b>>c;

    int fw,rw,cw;
    fw=a/3;
    rw=b/2;
    cw=c/2;

    int hp=min(fw,min(rw,cw));
    int h=hp;
    hp=hp*7;
    //cout<<hp<<endl;

    int f,r,cs;
    f=a-(3*h);
    if(f<0)
        f=0;

    r=b-(2*h);
    if(r<0)
        r=0;

    cs=c-(2*h);
    if(cs<0)
        cs=0;

    //cout<<f<<" "<<r<<" "<<cs<<endl;

    if(f>3)
        f=3;
    if(r>2)
        r=2;
    if(cs>2)
        cs=2;

    //cout<<f<<" "<<r<<" "<<cs<<endl;

    if(f==3)
    {
        if(r==2)
        {
            if(cs==2)
            {
                hp=hp+7;
            }
            else if(cs==1)
            {
                hp=hp+6;
            }
            else if(cs==0)
            {
                hp=hp+4;
            }

        }
        else if(r==1)
        {
            if(cs==2)
            {
                hp=hp+6;
            }
            else if(cs==1)
            {
                hp=hp+5;
            }
            else if(cs==0)
            {
                hp=hp+3;
            }
        }
        else if(r==0)
        {
            if(cs==2)
            {
                hp=hp+3;
            }
            else if(cs==1)
            {
                hp=hp+2;
            }
            else if(cs==0)
            {
                hp=hp+2;
            }
        }

    }
    else if(f==2)
    {
        if(r==2)
        {
            if(cs==2)
            {
                hp=hp+6;
            }
            else if(cs==1)
            {
                hp=hp+5;
            }
            else if(cs==0)
            {
                hp=hp+4;
            }

        }
        else if(r==1)
        {
            if(cs==2)
            {
                hp=hp+4;
            }
            else if(cs==1)
            {
                hp=hp+4;
            }
            else if(cs==0)
            {
                hp=hp+3;
            }
        }
        else if(r==0)
        {
            if(cs==2)
            {
                hp=hp+3;
            }
            else if(cs==1)
            {
                hp=hp+2;
            }
            else if(cs==0)
            {
                hp=hp+2;
            }
        }

    }
    else if(f==1)
    {
        if(r==2)
        {
            if(cs==2)
            {
                hp=hp+5;
            }
            else if(cs==1)
            {
                hp=hp+3;
            }
            else if(cs==0)
            {
                hp=hp+2;
            }
        }
        else if(r==1)
        {
            if(cs==2)
            {
                hp=hp+4;
            }
            else if(cs==1)
            {
                hp=hp+3;
            }
            else if(cs==0)
            {
                hp=hp+2;
            }
        }
        else if(r==0)
        {
            if(cs==2)
            {
                hp=hp+3;
            }
            else if(cs==1)
            {
                hp=hp+2;
            }
            else if(cs==0)
            {
                hp=hp+1;
            }
        }
    }

    else if(f==0)
    {
        if(r==2)
        {
            if(cs==2)
            {
                hp=hp+2;
            }
            else if(cs==1)
            {
                hp=hp+2;
            }
            else if(cs==0)
            {
                hp=hp+1;
            }
        }
        else if(r==1)
        {
            if(cs==2)
            {
                hp=hp+2;
            }
            else if(cs==1)
            {
                hp=hp+2;
            }
            else if(cs==0)
            {
                hp=hp+1;
            }
        }
        else if(r==0)
        {
            if(cs==2)
            {
                hp=hp+1;
            }
            else if(cs==1)
            {
                hp=hp+1;
            }
            else if(cs==0)
            {
                hp=hp+0;
            }
        }
    }



    cout<<hp<<endl;


    return 0;
}
