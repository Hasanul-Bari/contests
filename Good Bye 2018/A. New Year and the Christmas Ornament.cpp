#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,b,r;
    cin>>y>>b>>r;

    if(r-2<=y && r-1<=b)
    {
        cout<<(r-2)+(r-1)+r<<endl;
    }

    else if(b+1<=r && b-1<=y)
        cout<<(b-1)+b+(b+1)<<endl;
    else if(y+2<=r && y+1<=b)
        cout<<y+(y+1)+(y+2)<<endl;

    return 0;

}
