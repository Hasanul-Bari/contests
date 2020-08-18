#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,s=0,r;
    cin>>n>>v;

    if(n-1<=v)
        cout<<n-1<<endl;
    else
    {
        s=v;
        r=n-1-v;
        int i=2;
        while(r--)
        {
            s=s+i;
            i++;

        }
        cout<<s<<endl;
    }


    return 0;

}
