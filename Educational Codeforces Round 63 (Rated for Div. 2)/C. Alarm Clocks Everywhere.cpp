#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ull gcd(ull a,ull b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}


int main()
{
    faster

    int n,m;
    cin>>n>>m;

    ll x,ans,s,temp=-1;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(i==0)
            s=x;

        if(i!=0)
        {
            if(i==1)
                ans=x-temp;
            else
                ans=gcd(x-temp,ans);
        }

        temp=x;



    }

    //cout<<ans<<" ** "<<endl;

    int pos=-1;

    for(int i=0; i<m; i++)
    {
        cin>>x;

        if(ans%x==0)
        {
            pos=i+1;
        }

    }

    if(pos==-1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl<<s<<" "<<pos<<endl;





    return 0;
}
