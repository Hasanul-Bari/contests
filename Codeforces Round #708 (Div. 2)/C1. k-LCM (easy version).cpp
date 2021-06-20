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

    ll a[32];
    ll x=1;

    for(int i=0; i<31; i++)
    {
        cout<<x<<endl;
        a[i]=x;
        x=x*2;
    }

    int t,n,k;
    cin>>t;

    while(t--)
    {

        cin>>n>>k;

        int d=n/k;

        int r=n%k;

        if(r==0)
            cout<<d<<" "<<d<<" "<<d<<endl;
        else if(n%2!=0)
        {
             cout<<1<<" "<<(n/2)<<" "<<(n/2)<<endl;
        }
        else
        {
            int x,y,z;
            for(int i=0; i<31; i++)
            {
                if(a[i]<n)
                    x=a[i];
                else
                    break;
            }

            n=n-x;

            for(int i=0; i<31; i++)
            {
                if(a[i]<n)
                    y=a[i];
                else
                    break;
            }


            cout<<n-y<<"** "<<y<<" "<<x<<endl;
        }






    }




    return 0;
}

