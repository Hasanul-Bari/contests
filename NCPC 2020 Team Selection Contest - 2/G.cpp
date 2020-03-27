#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    double x,y;
    cin>>x>>y;

    double x1,x2,yy,d=0;

    for(int i=0; i<n; i++)
    {
        cin>>x1>>x2>>yy;

        if(i==0)
        {
            if(x>=x1 && x<=x2)
            {
                d=d+sqrt((y-yy)*(y-yy));
            }
            else if(x<x1)
            {
                double p=(x-x1)*(x-x1);
                p=p*p;
                p=abs(p);

                double q=(x-x2)*(x-x2);
                q=abs(q);

                d=d+sqrt(p+q);
            }
            else if(x>x2)
            {
                double p=(x-x1)+(x-x1);
                p=abs(p);

                double q=(x-y1)*(y-y1);
                q=abs(q);

                d=d+sqrt(p+q);
            }
        }


    }




    return 0;
}
