#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    for(int h=0; h<t; h++)
    {

        cin>>n;
        int a[n+1]= {0};
        for(int i=6; i<=n; i=i+7)
        {
            a[i]=1;
            if(i+1<=n)
                a[i+1]=1;
            //cout<<i<<" "<<i-1<<" * "<<endl;
        }

        int p,x,c=0;
        cin>>p;
        for(int j=0; j<p; j++)
        {
            cin>>x;
            for(int i=x; i<=n; i=i+x)
            {

                if(a[i]==0)
                {
                    //cout<<i<<endl;
                    a[i]=1;
                    c++;
                }


            }

        }

        cout<<c<<endl;

    }
    return 0;



}
