#include<iostream>

using namespace std;

int main()
{
    int t;
    while(cin>>t && t!=0)
    {

        int m=0,mv=0;
        for(int i=0; i<t; i++)
        {
            int l,w,h;
            cin>>l>>w>>h;

            v=l*h*w;


            if(h>m)
            {
                mv=v;

            }
            m=h;


        }
        cout<<v<<endl;
    }


}
