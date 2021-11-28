#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,m=0,mm=0;
    cin>>n;

    int a[n],b[n],c[n];

    vector<int> p,ng;

    ll sa=0,sb=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        sa=sa+a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];


        sb=sb+b[i];


        if(b[i]>a[i])
        {
            int l=b[i]-a[i];
            for(int j=0; j<l; j++)
            {
                p.pb(i+1);
            }

            m=m+l;
        }
        else if(b[i]<a[i])
        {
            int l=a[i]-b[i];
            for(int j=0; j<l; j++)
            {
                ng.pb(i+1);
            }
            mm=mm+l;

        }

    }

    if(sa!=sb)
    {
        cout<<-1<<endl;
        return;
    }

    if(mm!=m)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<m<<endl;

    for(int i=0; i<m; i++)
    {
        cout<<ng[i]<<" "<<p[i]<<endl;
    }
}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


