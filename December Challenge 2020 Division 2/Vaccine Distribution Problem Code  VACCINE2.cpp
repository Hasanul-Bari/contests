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

    int t,n,d,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>d;
        int r=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x>=80 || x<=9)
                r++;
        }

        int ans=r/d;
        if(r%d!=0)
            ans++;

        ans+=(n-r)/d;

        if((n-r)%d!=0)
            ans++;

        cout<<ans<<endl;
    }




    return 0;
}
