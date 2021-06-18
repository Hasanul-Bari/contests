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

    int  n,m;

    cin>>n>>m;

    int a[n],b[m];


    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
        cin>>b[i];

    ll s=0;
    int j=0;
    for(int i=0; i<n; )
    {
        if(a[i]<=b[j])
        {
            s=s+(b[j]-a[i]);
            i++;
            j++;
        }
        else
            j++;
    }

    for( ; j<m; j++)
        s=s+b[j];


    cout<<s<<endl;






    return 0;
}


