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
    int n;
    ll m;

    cin>>n>>m;
    ll a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    ll s=0,mx;

    int i=0;
    while(i<n)
    {
        if(s+a[i]<=m)
        {
            s=s+a[i];
            i++;
        }
        else
            break;

    }

    //cout<<s<<endl;

    mx=s;

    int j=0;
    while(i<n)
    {
        if(s+a[i]<=m)
        {
            s=s+a[i];
            i++;

            mx=max(mx,s);
        }
        else
        {
            s=s-a[j];
            j++;
        }

        //cout<<s<<" ** "<<i<<endl;
    }

    cout<<mx<<endl;




    return 0;
}
