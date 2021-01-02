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

    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int h,u,d;
        bool hp=true;

        cin>>h;

        u=h, d=h;

        for(int i=1; i<n-1; i++)
        {
            cin>>h;

            u=min(h+k-1, u+k-1);
            d=max(h, d-(k-1));

            if(d>u)
                hp=false;


        }

        cin>>h;
        u=min(h, u+k-1);
        d=max(h, d-(k-1));

        if(d>u)
            hp=false;


        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}

