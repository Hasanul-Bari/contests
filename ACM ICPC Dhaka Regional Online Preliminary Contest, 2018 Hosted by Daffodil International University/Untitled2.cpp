#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r,c,ck=0;
        cin>>r>>c;

        if(r+1<=8  && c+2<=8 && c+2 >0&& r+1>0)
        {
            ck++;
        }

        if(r+1<=8  && c-2<=8 && c-2 >0&& r+1>0)
        {
            ck++;
        }

        if(r+2<=8  && c+1<=8&& c+1 >0&& r+2>0)
        {
            ck++;
        }
        if(r+2<=8  && c-1<=8&& c-1 >0&& r+2>0)
        {
            ck++;
        }

        if(r-1<=8  && c+2<=8&& c+2 >0&& r-1>0)
        {
            ck++;
        }

        if(r-1<=8  && c-2<=8&& c-2 >0&& r-1>0)
        {
            ck++;
        }

        if(r-2<=8  && c+1<=8&& c+1 >0&& r-2>0)
        {
            ck++;
        }

        if(r-2<=8  && c-1<=8&& c-1 >0&& r-2>0)
        {
            ck++;
        }

        cout<<"Case "<<i+1<<": "<<ck<<endl;

    }


return 0;
}
