#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int x,y, z;
    cin>>x>>y>>z;


    int n=x+z;
    int m=y+z;

    if(x>m)
        cout<<"+"<<endl;
    else if(y>n)
        cout<<"-"<<endl;
    else if(z==0 && x==y)
        cout<<"0"<<endl;
    else
        cout<<"?"<<endl;





    return 0;
}
