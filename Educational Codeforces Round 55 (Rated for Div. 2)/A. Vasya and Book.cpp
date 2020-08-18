#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {


        long long n,x,y,d,c=0;
        cin>>n>>x>>y>>d;

        if(x<y && (y-x)%d)
        {
           c=c+((y-x)/d);
        }
        if(x>y && (x-y)%d==0)
        {
            c=c+((x-y)/d);
        }

        if(x<y && (x-y)%d!=0)
        {
            if(n-x<x)
            {
                if(x%d==0)
                    c=c+(x/d);
                else
                    c=c+(x/d)+1;

                c=c+(y/d);
            }
            else
            {
                if((n-x)%d==0)
                    c=c+((n-x)/d);
                else
                    c=c+((n-x)/d)+1;

                c=c+(n-y)/d;
            }


        }
        cout<<c<<endl;
    }
}
