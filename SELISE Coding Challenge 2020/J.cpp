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

        double x=sqrt(n);

        ll z=x;

        if(z*z==n)
        {
            //cout<<z<<endl;

            if(z<=2)
                cout<<0<<endl;
            else
                cout<<((z-1)*(z-2))/2<<endl;

        }
        else
            cout<<0<<endl;




    }



    return 0;
}

