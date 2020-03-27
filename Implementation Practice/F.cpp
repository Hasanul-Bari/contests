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
    cin>>n;

    int mxp=0,mx,a[n];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i==0)
        {
            mx=a[i];
        }
        else if(a[i]>mx)
        {
            mx=a[i];
            mxp=i;
        }
    }


    for(int i=mxp+1; i<n; i++)
    {
        if(a[i-1]<a[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    for(int i=mxp-1; i>=0; i--)
    {
        if(a[i+1]<a[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
