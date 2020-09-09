#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int t,n,q,k=1;


    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&q);

        ll l[n],r[n],p;

        for(int i=0; i<n; i++)
            scanf("%lld%lld",&l[i],&r[i]);

        sort(l,l+n);
        sort(r,r+n);


        printf("Case %d:\n",k);
        k++;
        for(int i=0; i<q; i++)
        {
            scanf("%lld",&p);



            int x=upper_bound(l,l+n,p)-l;

            int y=lower_bound(r,r+n,p)-r;




            //cout<<x<<" ** "<<y<<endl;

            //cout<<min(x,y)<<endl;
            printf("%d\n",abs(x-y));
        }
    }


    return 0;
}






