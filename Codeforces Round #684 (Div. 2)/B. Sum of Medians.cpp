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

    int t,n,k,x;
    cin>>t;

    while(t--)
    {

        cin>>n>>k;

        int a[(n*k)+1];

        for(int i=1; i<=n*k; i++)
        {
            cin>>a[i];
        }

        int md=n/2;
        if(n%2!=0)
            md++;

        int f=(md-1)*k;

        //cout<<f<<endl;
        ll s=0;
        for(int i=f+1; i<=n*k; i=i+(n-md+1))
        {
            s=s+a[i];
        }

        cout<<s<<endl;



    }



    return 0;
}
