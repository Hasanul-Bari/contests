#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll mask[32];

void init()
{
    mask[0]=1;
    for(ll i=1; i<32; i++)
    {
        mask[i]=mask[i-1]*2;
        //cout<<mask[i]<<endl;
    }

    for(ll i=0; i<32; i++)
    {
        mask[i]--;
        //cout<<mask[i]<<endl;
    }
}

void solve(int tc)
{
    int n;
    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int j=0;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            while(a[i]>mask[j])
            {
                j++;
            }

            //cout<<mask[j]<<endl;
            cout<<0<<" ";
        }
        else
        {
            while(a[i]>mask[j])
            {
                j++;
            }

            //cout<<mask[j]<<endl;

            cout<<mask[j]-a[i]<<" ";
        }

    }

    cout<<endl;

}


int main()
{
    faster

    init();

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


