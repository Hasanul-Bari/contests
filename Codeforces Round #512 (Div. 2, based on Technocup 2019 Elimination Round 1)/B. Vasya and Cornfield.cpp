#include<iostream>
#include<cmath>
using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3);



float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs( (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) )/2.0);
}


int main()
{
    int n,d;
    cin>>n>>d;

    int x1,x2,x3,x4,y1,y2,y3,y4;

    x1=0;
    y1=d;

    x2=d;
    y2=0;

    x3=n;
    y3=n-d;

    x4=n-d;
    y4=n;

    int m;
    cin>>m;

    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;

        float A=area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);

        float A1 = area(x, y, x1, y1, x2, y2);

        float A2 = area(x, y, x2, y2, x3, y3);

        float A3 = area(x, y, x3, y3, x4, y4);

        float A4 = area(x, y, x1, y1, x4, y4);


        if(A==A1+A2+A3+A4)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;

    }
    return 0;
}
