#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int x;
    cin>>x;

    int r=x%4;

    char c;
    int a;
    if(r==2)
    {
        a=1;
        c='B';
    }
    else if(r==3)
    {
        a=2;
        c='A';
    }
    else if(r==0)
    {
        a=1;
        c='A';
    }
    else if(r==1)
    {
        a=0;
        c='A';
    }

    cout<<a<<" "<<c<<endl;






    return 0;
}
