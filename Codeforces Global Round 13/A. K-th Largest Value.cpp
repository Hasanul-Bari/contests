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

    int n,q,t,x;

    cin>>n>>q;

    ll z=0,o=0,a[n];

    for(int i=0; i<n; i++)
    {

        cin>>a[i];

        if(a[i]==0)
            z++;
        else
            o++;
    }

    while(q--)
    {
        cin>>t>>x;

        if(t==1)
        {
            if(a[x-1]==1)
            {
                a[x-1]=0;
                o--;
                z++;
            }
            else
            {
                a[x-1]=1;
                o++;
                z--;
            }
        }
        else
        {
            if(x<=o)
                cout<<1<<endl;

            else
                cout<<0<<endl;

        }
    }




    return 0;
}
