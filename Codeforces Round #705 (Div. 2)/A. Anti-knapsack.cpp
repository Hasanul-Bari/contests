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

        vector<int> v;

        int nn=k/2;

        if(k%2!=0)
            nn++;

        for(int i=nn; i<k; i++)
        {
            v.pb(i);
        }

        for(int i=k+1; i<=n; i++)
        {
            v.pb(i);
        }


        cout<<v.size()<<endl;
        for(int x : v)
            cout<<x<<" ";
        cout<<endl;

    }




    return 0;
}
