#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    ll x,e=0,o=0,e1=0,o1=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            e++;
        else
            o++;
    }

    for(int i=0; i<m; i++)
    {
        cin>>x;
        if(x%2==0)
            e1++;
        else
            o1++;
    }

    ll ans=min(e,o1)+min(e1,o);

    cout<<ans<<endl;






    return 0;
}
