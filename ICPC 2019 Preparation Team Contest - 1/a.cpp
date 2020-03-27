#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int a,b;
    cin>>a>>b;

    int x=1,y=1,i=0,j=0;

    while(1)
    {
        if(a<x)
        {
            a=a-x;
            x++;
        }
        else
            break;
    }

    while(1)
    {
        if(b<y)
        {
            b=b-y;
            y++;
        }
        else
            break;
    }

    cout<<x<<" "<<y<<endl;




    return 0;
}
