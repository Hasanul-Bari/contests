#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int kk,n,m;
    cin>>kk>>n>>m;

    int a[n],b[m];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    vector<int> v;


    for(int i=0,j=0,k=0; i<n+m; i++)
    {
        if(j<n && a[j]==0)
        {
            v.pb(a[j]);
            j++;
            kk++;
        }
        else if(k<m && b[k]==0)
        {
            v.pb(b[k]);
            k++;
            kk++;
        }
        else if(j<n && a[j]<=kk)
        {
            v.pb(a[j]);
            j++;
        }
        else if(k<m && b[k]<=kk)
        {
            v.pb(b[k]);
            k++;
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


