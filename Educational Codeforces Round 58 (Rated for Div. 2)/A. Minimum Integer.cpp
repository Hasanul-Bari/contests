#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin>>q;
    long long l,r,d;
    long long ans,c;
    for(int k=0; k<q; k++)
    {
        cin>>l>>r>>d;
        if(l>d)
        {
            cout<<d<<endl;
        }
        else
            cout<<d*((r/d)+1)<<endl;

    }



    return 0;
}
