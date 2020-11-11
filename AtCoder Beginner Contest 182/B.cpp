#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int ans,mx;
    for(int i=2; i<=1000; i++)
    {
        int d=0;
        for(int j=0; j<n; j++)
        {

            if(a[j]%i==0)
                d++;


        }

        if(i==0)
        {
            mx=d;
            ans=i;
        }
        else if(d>=mx)
        {
            mx=d;
            ans=i;
        }
    }

    cout<<ans<<endl;




    return 0;
}
