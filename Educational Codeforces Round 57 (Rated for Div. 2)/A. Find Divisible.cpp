#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int x,y,c=1;
        long long l,r;
        cin>>l>>r;
        while(r%l!=0 || r==l)
        {
            r=r-(r%l);

        }


        cout<<l<<" "<<r<<endl;
    }
}
