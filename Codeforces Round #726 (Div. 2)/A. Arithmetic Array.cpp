#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;

    int a[n];

    ll s=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }

    if(s>=n)
    {
        cout<<s-n<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
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

