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

    ll a,b,c;

    while(t--)
    {
        cin>>a>>b>>c;

        ll t=a+b+c;

        ll mn=min(a,min(b,c));

        ll en=t/9;



        if(en>=1 && en<=mn && t%9==0)
        {
            cout<<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
