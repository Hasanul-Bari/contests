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

    ll n;

    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);

    if(n%2==0)
    {

        int m=n/2;

        ll c1=0,c2=0;


        for(int i=0; i<n; i++)
        {
            c1=c1+abs(a[m]-a[i]);


        }

        if(m-1>=0)
        {
            for(int i=0; i<n; i++)
            {
                c2=c2+abs(a[m-1]-a[i]);
            }

            cout<<min(c1,c2)<<endl;
        }
        else
            cout<<c1<<endl;



    }
    else
    {
        ll m=a[n/2],c1=0;

        for(int i=0; i<n; i++)
        {
            c1=c1+abs(m-a[i]);


        }

        cout<<c1<<endl;

    }






    return 0;
}

