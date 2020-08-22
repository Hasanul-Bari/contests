#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll wt[1000];
ll p[1000];

ll knapsack(ll c, ll n)
{
    //ll k[n+1][c+1];

    vector<ll> k[n+1];

    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=c; w++)
        {

            if(i==0 || w==0)
                k[i].pb(0);

            else if(wt[i]<=w)
                k[i].pb(max( k[i-1][w], p[i]+k[i-1][w-wt[i]] ) );
            else
                k[i].pb(k[i-1][w]);


        }
    }


    /*for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=c; w++)
        {
            cout<<k[i][w]<<" ";
        }
        cout<<"*"<<endl;
    }*/

    return k[n][c];
}


int main()
{
    ll n,c;
    int t,k=1;
    cin>>t;

    while(t--)
    {



    cin>>n>>c;




    for(int i=1; i<=n; i++)
        cin>>wt[i]>>p[i];


    cout<<"Case "<<k<<": ";

    if(n==0 || c==0)
        cout<<0<<endl;
    else
        cout<<knapsack(c,n)<<endl;

    k++;

    }
}


