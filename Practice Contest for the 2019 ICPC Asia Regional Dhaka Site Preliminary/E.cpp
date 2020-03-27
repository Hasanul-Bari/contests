#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    //faster

    int t;
    scanf("%d",&t);

    double l,pi=3.141592654;

    while(t--)
    {
        scanf("%lf",&l);
        double ans=l*l;
        ans=ans*pi;
        printf("%lf\n",ans);
    }




    return 0;
}

