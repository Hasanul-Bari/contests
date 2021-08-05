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

    if(n%2==0)
    {
        for(int i=1; i<=n; i=i+2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1; i<=n-3; i=i+2)
        {
            cout<<i+1<<" "<<i<<" ";
        }

        cout<<n-1<<" "<<n<<" "<<n-2<<endl;
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

