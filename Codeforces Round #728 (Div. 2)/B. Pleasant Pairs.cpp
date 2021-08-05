#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n;
    cin>>n;

    ll a[n];
    ll z=(2*n)+9;

    ll b[z];

    for(int i=0; i<z; i++)
    {
        b[i]=-1;
    }

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        b[a[i]]=i+1;

    }

    ll nn=n+(n-1);

    ll c=0;

    for(ll i=3; i<=nn; i++)
    {
        for(ll j=1; j*j<=i; j++)
        {
            if(i%j==0)
            {
                if(j!=(i/j) && b[j]>0 && b[i/j]>0)
                {
                    if(b[j]+b[i/j]==i)
                    {
                        //cout<<b[j]<<" "<<b[i/j]<<" ** "<<i<<endl;
                        c++;
                    }
                }
            }
        }
    }


    cout<<c<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

