#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class num
{
public:

    double a;
    double p;
    double m;
};

bool comparator(num x,num y)
{
    return x.a<y.a;
}

int main()
{
    //faster

    int t,n,d,p,m,k=1;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&d);

        num x[n];

        for(int i=0; i<n; i++)
        {
            scanf("%lf%lf",&x[i].p,&x[i].m);

            x[i].a=(x[i].p)/(x[i].m);

        }

        sort(x,x+n,comparator);

        double s=0,sm=0;




        for(int i=n-1; i>=d; i--)
        {
            s=s+double(x[i].p);
            sm=sm+double(x[i].m);

            //cout<<s<<" ** "<<sm<<endl;
        }

        //cout<<s/sm<<endl;
        printf("Case %d: ",k);
        printf("%.16lf\n",(s/sm)*100.0);
        k++;
    }




    return 0;
}
