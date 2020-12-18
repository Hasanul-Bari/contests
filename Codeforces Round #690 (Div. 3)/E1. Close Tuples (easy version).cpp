#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll binomial_coefficient(ll n, ll k)
{
    ull ans=1;
    if(k>n-k)
        k=n-k;

    for(ull i=0; i<k; i++)
    {
        ans=ans*(n-i);
        ans=ans/(i+1);
    }

    return ans;
}


int main()
{
    faster

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll s=0;

        for(int i=0; i<n; i++)
        {
            ll x=a[i]+2;

            ll j=upper_bound(a,a+n,x)-a;
            j--;

            ll e=j-i;

            //cout<<a[i]<<" "<<e<<endl;



            if(e>=2)
            {
                s=s+binomial_coefficient(e,2);
            }
        }

        cout<<s<<endl;




    }




    return 0;
}
