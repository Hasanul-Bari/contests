#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t,m,d,r,a;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>m>>d;
        r=cbrt(((m/d)*(3.0/4.0))/3.1416);
        a=4.0*3.1416*(r*r);

        printf("Case %d: %.4lf\n",i,a);

    }
    return 0;
}
