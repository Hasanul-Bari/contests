#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[200005];
int diff[200005];
int ps[200005];

int main()
{
    faster

    int n,k,q;
    cin>>n>>k>>q;

    int l,r;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;

        diff[l-1]++;
        diff[r]--;
    }



    for(int i=1; i<=200000; i++)
    {
        a[i]=a[i-1]+diff[i-1];

        if(a[i]>=k)
            ps[i]=ps[i-1]+1;
        else
            ps[i]=ps[i-1];

        //cout<<i<<"  ** "<<a[i]<<endl;

        //cout<<ps[i]<<endl;
    }



    while(q--)
    {
        cin>>l>>r;

        cout<<ps[r]-ps[l-1]<<endl;
    }






    return 0;
}
