#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,q;
    cin>>n>>q;

    int c[52];

    for(int i=1; i<=50; i++)
    {
        c[i]=0;
    }

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(c[a[i]]==0)
        {
            c[a[i]]=i+1;
        }
    }

    int x;

    for(int i=0; i<q; i++)
    {
        cin>>x;

        int id=c[x];

        cout<<id<<" ";

        for(int j=1; j<=50; j++)
        {
            if(c[j]<id)
            {
                if(c[j]!=0)
                {
                    c[j]++;
                }
            }
        }

        c[x]=1;

    }
    cout<<endl;



}


int main()
{
    faster

    int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

