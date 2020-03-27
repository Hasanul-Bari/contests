#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    int x=abs(1-n);
    x=x-1;
    if(x==0)
        x=1;

    double z=sqrt(double(n));

    cout<<z<<endl;
    int y;

    if(z*z!=n)
        y=(int)z+1;
    else
        y=(int)z;

    cout<<y<<endl;

    int h=0,cc=0;
    int r=1,c=1;


    int yy=1;


    while(1)
    {
        for(c=1; yy<=y; c=c+x)
        {
            cout<<r<<" "<<c<<endl;
            //cout<<h<<" h "<<endl;
            h++;
            yy++;

            if(h==n)
            {
                cc=1;
                break;
            }
        }
        if(cc==1)
            break;
        r=r+x;
        yy=1;


    }






    return 0;
}
