#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int i=n,s=0;
    while(1)
    {
        int y=i;

        while(y>0)
        {
           s=s+(y%10);
           y=y/10;
        }
        if(s%4==0)
            break;

        i++;
        s=0;
    }


    cout<<i<<endl;






    return 0;
}
