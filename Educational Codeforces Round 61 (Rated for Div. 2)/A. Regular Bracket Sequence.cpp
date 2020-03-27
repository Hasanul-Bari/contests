#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4];

    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }
    int c=0,c2=0;

    if(a[0]==a[3])
        c=1;

    if(a[0]==0 && a[3]==0 && a[2]!=0)
        c=0;


    if(c==1)
        cout<<1<<endl;
    else if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;




}
