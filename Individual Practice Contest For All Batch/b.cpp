#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nn,top,s,n,w,e,b,temp;
    string ss;
    while(cin>>nn && nn!=0)
    {
        top=1;
        n=2;
        s=5;
        w=3;
        e=4;
        b=6;
        for(int i=0; i<nn; i++)
        {
            cin>>ss;
            if(ss=="north")
            {
                temp=top;
                top=s;
                s=b;
                b=n;
                n=temp;

            }

            else if(ss=="south")
            {
                temp=top;
                top=n;
                n=b;
                b=s;
                s=temp;
            }

            else if(ss=="east")
            {
               temp=top;
               top=w;
               w=b;
               b=e;
               e=temp;
            }

            else if(ss=="west")
            {
               temp=top;
               top=e;
               e=b;
               b=w;
               w=temp;

            }

            //cout<<top<<" * "<<endl;
        }

        cout<<top<<endl;
    }
    return 0;
}
