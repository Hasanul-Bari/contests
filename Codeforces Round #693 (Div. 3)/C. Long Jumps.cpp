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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll b[n+1];
        for(int i=1; i<=n; i++)
            b[i]=0;

        ll mx,x;

        for(int i=1; i<=n; i++)
        {
            cin>>x;

            int j=x;

            x=x+b[i];

            if(i+j<=n)
            {
                b[i+j]=max(b[i+j],x);
            }


            if(i==1)
                mx=x;
            else
                mx=max(mx,x);

        }

        cout<<mx<<endl;
    }





    return 0;
}
