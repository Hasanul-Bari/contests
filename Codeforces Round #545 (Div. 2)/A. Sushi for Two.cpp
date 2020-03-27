#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,s=0,t=0,m,ans=0,hp=0;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

     if(a[0]==1)
            t++;
     else
        s++;


    for(int i=1; i<n; i++ )
    {
        if(a[i]!=a[i-1] && hp==0)
        {
            hp=1;
        }

        if(a[i]!=a[i-1] && hp==1)
        {
            m=min(s,t);
            //cout<<s<<" "<<t<<" * "<<endl;
            //cout<<m<<endl;
            if(ans<m)
                ans=m;
            if(a[i]==1)
                t=0;
            else
                s=0;
        }


        if(a[i]==1)
        {
            t++;
        }
        else if(a[i]==2)
        {
            s++;
        }
        //cout<<s<<" "<<t<<endl;



    }
    m=min(s,t);
    if(ans<m)
        ans=m;

    cout<<ans*2<<endl;



    return 0;
}

