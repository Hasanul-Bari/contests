#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;

    cin>>n;

    int a[n],mn,mx,mnp,mxp;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];


        if(i==0)
        {
            mn=a[i];
            mx=a[i];
            mnp=i;
            mxp=i;
        }
        else
        {
            if(mn>a[i])
            {
                mn=a[i];
                mnp=i;
            }

            if(mx<a[i])
            {
                mx=a[i];
                mxp=i;
            }
        }


    }

    if(mnp>mxp)
        swap(mnp,mxp);


    int r1=mnp+1+(n-mxp);

    //cout<<r1<<" "<<mxp+1<<" "<<n-mnp<<endl;

    cout<<min(mxp+1,min(n-mnp,r1))<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

