#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    long long l,r,s=0;
    for(int i=0; i<q; i++)
    {
        cin>>l>>r;
        s=0;
        for(long long j=l; j<=r; j++)
        {
            //cout<<j<<" * ";
            if(j%2==0)
              s=s+j;
            if(j%2!=0)
              s=s-j;


        }
        cout<<s<<endl;
    }


    return 0;
}
