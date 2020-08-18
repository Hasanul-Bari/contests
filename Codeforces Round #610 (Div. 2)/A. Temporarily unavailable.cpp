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

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,r;

        cin>>a>>b>>c>>r;

        ll p=c-r,q=r+c;

        ll x;

        if(a>b)
            swap(a,b);


        x=b-a+1;



        p=max(a,p);
        q=min(b,q);

        //cout<<p<<" "<<q<<endl;

        if(p<=q)
        {
            cout<<x-(q-p+1)<<endl;
        }
        else
            cout<<x-1<<endl;
    }




    return 0;
}
