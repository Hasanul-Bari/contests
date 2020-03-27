#include<iostream>

using namespace std;

int main()
{
    int t;
    while(cin>>t && t!=0)
    {

        int m=0,v=0;
        for(int i=0; i<t; i++)
        {
            int l,w,h;
            cin>>l>>w>>h;


            if(h>m)
            {
                v=l*h*w;

            }
            m=h;


        }
        cout<<v<<endl;
    }


}
