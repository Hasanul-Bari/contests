#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,l,r;

    cin>>n>>l>>r;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    ll c=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]<r)
        {
            int el=l-a[i];
            int er=r-a[i];

            if(el<1)
                el=1;

            int p=lower_bound(a,a+n,el)-a;
            int q=upper_bound(a,a+n,er)-a;

            //cout<<a[i]<<endl;

            p=max(i+1,p);
            q=max(i+1,q);

            //cout<<p<<" ** "<<q<<endl;

            c=c+(q-p);


        }
    }

    cout<<c<<endl;
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

