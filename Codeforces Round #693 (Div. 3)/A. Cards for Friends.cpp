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

    int t,h,w,n;

    cin>>t;

    while(t--)
    {
        cin>>w>>h>>n;

        ll c=1,c2=1;

        while(w%2==0)
        {
            w=w/2;
            c=c*2;
        }

        while(h%2==0)
        {
            h=h/2;
            c2=c2*2;
        }




        if(c*c2>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
