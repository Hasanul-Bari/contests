#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int q;
    cin>>q;
    ull x[3];
    while(q--)
    {
        for(int i=0; i<3; i++)
            cin>>x[i];

        sort(x,x+3);

        ull p=x[1]-x[0];

        ull q=x[2]-p;

        if(q>=0)
        {
            p=x[1]+q/2;
        }
        else
            p=min(x[0],x[1]);

        cout<<p<<endl;


    }




    return 0;
}
