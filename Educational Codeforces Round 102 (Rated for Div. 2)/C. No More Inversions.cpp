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

    int t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;


        if(n==k)
        {
            for(int i=1; i<=k; i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {

            int x=n-k;


            int z=k-x;

            for(int i=1; i<z; i++)
                cout<<i<<" ";

            for(int i=k; i>=z; i--)
                cout<<i<<" ";

            cout<<endl;
        }
    }




    return 0;
}
