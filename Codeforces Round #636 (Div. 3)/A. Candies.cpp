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

    int t,n;
    cin>>t;

    ll s=1,a[40];
    a[1]=1;
    for(int i=2; i<=32; i++)
    {
        a[i]=0;
        s=s*2;
        a[i]=a[i-1]+s;

        //cout<<a[i]<<endl;

    }

    while(t--)
    {
        cin>>n;


        for(int i=2; i<=32; i++)
        {
            if(n%a[i]==0)
            {
                cout<<n/a[i]<<endl;
                break;
            }

        }

    }




    return 0;
}

