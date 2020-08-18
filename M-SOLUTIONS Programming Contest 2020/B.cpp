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
    int r,g,b,k;

    cin>>r>>g>>b>>k;

    while(g<=r)
    {
        if(k==0)
        {
            cout<<"No"<<endl;
            return 0;
        }

        g=g*2;
        k--;
    }

    while(b<=g)
    {
        if(k==0)
        {
            cout<<"No"<<endl;
            return 0;
        }

        b=b*2;
        k--;
    }

    cout<<"Yes"<<endl;




    return 0;
}
