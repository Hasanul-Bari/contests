#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,x;
    cin>>n;

    int a[101];
    for(int i=0; i<=100; i++)
    {
        a[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;
    }
    int ans=0;

    for(int i=0; i<=100; i++)
    {
        if(a[i]==0)
        {
            ans=ans+i;
            break;
        }

        a[i]--;
        if(i==100)
            ans=ans+101;
    }


    for(int i=0; i<=100; i++)
    {
        if(a[i]==0)
        {
            ans=ans+i;
            break;
        }

        a[i]--;
        if(i==100)
            ans=ans+101;
    }

    cout<<ans<<endl;
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

