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
    ll t,a,b,c,d,x,y,x1,x2,y1,y2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;


        ll l=x-x1, r=x2-x,dw=y-y1, u=y2-y, xx=x2-x1, yy=y2-y1;;

        //cout<<l<<" ** "<<r<<" "<<dw<<" "<<u<<endl;



        ll p=a-min(a,b);
        ll q=b-min(a,b);
        ll rr=c-min(c,d);
        ll s=d-min(c,d);






        //cout<<p<<" ## "<<q<<" "<<r<<" "<<s<<endl;


        bool c1=true,c2=true;
        if(a>=1 && b>=1)
        {
            if(l==0 && r==0)
                c1=false;
        }

        if(c>=1 && d>=1)
        {
            if(dw==0 && u==0)
                c2=false;
        }

        //cout<<c1<<" "<<c2<<endl;





        if(p<=l && q<=r && rr<=dw && s<=u && c1==true && c2==true  )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;



    }




    return 0;
}
