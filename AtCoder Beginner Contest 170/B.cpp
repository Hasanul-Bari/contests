#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int x,y;

    cin>>x>>y;

    if(y%2!=0)
        cout<<"No"<<endl;
    else
    {
        int fr=y/4,rem=y%4;

        if(rem!=0)
            rem=1;

        if(fr+rem<=x && x<=(fr*2)+rem)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }










    return 0;
}
