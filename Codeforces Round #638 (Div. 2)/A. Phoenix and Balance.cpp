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

    ll t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll s=0,s1=0;
        ll i=0,j=2;

        for( i=0; i<(n/2)-1; i++)
        {
            s=s+j;
            j=j*2;
        }
        for( i=0; i<(n/2); i++)
        {
            s1=s1+j;
            j=j*2;
        }

        s=s+j;

        //cout<<s<<" "<<s1<<endl;

        cout<<abs(s-s1)<<endl;

    }





    return 0;
}
