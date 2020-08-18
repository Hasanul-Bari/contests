#include<iostream>
using namespace std;

int main()
{
    int t,n,c=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;

        int m=n;

        while(m!=0)
        {
            int r;
            r=m%10;
            m=m/10;
            for(int j=1; j<=r; j++)
            {
                if(r=i*i)
                    c=c+r;
            }
        }

        if(n==c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}
