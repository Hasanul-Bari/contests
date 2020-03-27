#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,q,x;
    cin>>q;

    while(q--)
    {
        cin>>n;

        ll s=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            s=s+x;

        }

        double ans=ceil(double(s)/double(n));

        cout<<int(ans)<<endl;

    }






    return 0;
}
