#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

ll sum(ll a)
{
    ll s=1;
    while(a>0)
    {
        s=s*(a%10);
        a=a/10;
    }
    return s;
}

ll product(ll x)
{
    ll i=1, ans=x;

    while(x>0)
    {
        ll c=(x-1)*i+(i-1);
        cout<<c<<endl;


        if(sum(c) > sum(ans) ||  (sum(c) == sum(ans) &&  c>ans))
            ans =c;


        x=x/10;
        i=i*10;
    }

    return ans;
}


int main()
{
    faster
    ll n;
    cin>>n;
    ll x=product(n),ans=1;
    while(x>0)
    {
        ans=ans*(x%10);
        x=x/10;
    }

    cout<<ans<<endl;


    return 0;
}
