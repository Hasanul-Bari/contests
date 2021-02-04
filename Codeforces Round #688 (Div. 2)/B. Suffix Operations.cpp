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

    while(t--)
    {
        cin>>n;

        ll s=0;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i!=0)
                s=s+abs(a[i]-a[i-1]);
        }

        ll mn=s;

        mn=min(mn,s-abs(a[0]-a[1]));
        mn=min(mn,s-abs(a[n-1]-a[n-2]));

        for(int i=1; i<n-1; i++)
        {
            ll x=s-abs(a[i]-a[i-1])-abs(a[i]-a[i+1])+abs(a[i-1]-a[i+1]);
            mn=min(mn,x);
        }

        cout<<mn<<endl;

    }




    return 0;
}
