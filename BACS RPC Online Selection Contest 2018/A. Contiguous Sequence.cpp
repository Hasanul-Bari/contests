#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=1)
    {
        for(int i=0; i<t; i++)
        {
            int n,c=0;
            cin>>n;
            long  *a=new long[n];
            for(int j=0; j<n; j++)
            {
                cin>>a[j];
            }

            for(int j=0; j<n; j++)
            {
               if(a[j+1]-a[j]==1)
                c++;
            }

            if(c==0)
                cout<<"Case "<<i+1<<": No"<<endl;
            else
                cout<<"Case "<<i+1<<": Yes"<<endl;


        }
    }
    return 0;
}
