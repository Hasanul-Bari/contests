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

    int s=0,a[n];

    map<int,int> m;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        m[a[i]]++;
    }

    sort(a,a+n);

    if(m.size()==1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<n-m[a[0]]<<endl;
    }


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

