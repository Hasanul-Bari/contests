#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            if( (i%j==0) && (i*j>x) && (i/j<x) )
            {
                cout<<i<<" "<<j<<endl;
                c=1;
                return 0;
            }
        }
    }

    if(c==0)
        cout<<-1<<endl;

    return 0;
}
