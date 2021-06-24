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

   for(int i=0; i<n; i++)
   {
        cin>>x;
   }

    cout<<n*3<<endl;
   for(int i=0; i<(n/2); i++)
   {
        for(int j=0; j<3; j++)
        {
            cout<<1<<" "<<i+1<<" "<<n-i<<endl;
            cout<<2<<" "<<i+1<<" "<<n-i<<endl;
        }
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


