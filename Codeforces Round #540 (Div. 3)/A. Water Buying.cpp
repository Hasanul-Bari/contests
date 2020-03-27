#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,x,y,q;
    cin>>q;
    while(q--)
    {

        cin>>n>>a>>b;

        if(n%2==0)
        {
            x=a*n;
            y=b*(n/2);
            cout<<min(x,y)<<endl;
        }

        else
        {
            x=a*n;
            y=a+(b*(n/2));
              cout<<min(x,y)<<endl;


        }

    }
    return 0;


}
