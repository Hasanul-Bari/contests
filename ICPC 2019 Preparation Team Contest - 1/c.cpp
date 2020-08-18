#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int w,h,n;
    cin>>w>>h>>n;

    int xx,yy,aa;

    int a1=0,a2=w,a3=0,a4=h;
    int hp1=0,hp2=0,hp3=0,hp4=0;

    for(int i=0; i<n; i++)
    {
        cin>>xx>>yy>>aa;

        if(aa==1)
        {
            if(hp1==0)
            {
                a1=xx;
                hp1=1;
            }
            else
            {
                if(xx>a1)
                    a1=xx;
            }

        }
        else if(aa==2)
        {
            if(hp2==0)
            {
                a2=xx;
                hp2=1;
            }
            else
            {
                if(xx<a2)
                    a2=xx;
            }

        }
        else if(aa==3)
        {
            if(hp3==0)
            {
                a3=yy;
                hp3=1;
            }
            else
            {
                if(yy>a3)
                    a3=yy;
            }

        }
        else if(aa==4)
        {
            if(hp4==0)
            {
                a4=yy;
                hp4=1;
            }
            else
            {
                if(yy<a4)
                    a4=yy;
            }
        }
    }


    //cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;


    if(a1>=a2)
    {
        w=0;
    }
    else
    {
        w=a2-a1;
    }

    if(a3>=a4)
    {
        h=0;
    }
    else
    {
        h=a4-a3;
    }

    //cout<<w<<" "<<h<<endl;

    cout<<w*h<<endl;




    return 0;
}
