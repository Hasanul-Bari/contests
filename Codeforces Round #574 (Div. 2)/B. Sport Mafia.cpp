#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,k;
    cin>>n>>k;

    ll j=1,c=0,ans=0;
    for(int i=1; i<=n; i++)
    {
        if(c<k)
        {
            c=c+j;
            j++;
        }
        else if(c>k)
        {
            c--;
            ans++;
        }
        else if(c==k)
        {
            c=c+j;
            j++;

        }

        //cout<<c<<endl;
    }

    cout<<ans<<endl;

    return 0;
}
