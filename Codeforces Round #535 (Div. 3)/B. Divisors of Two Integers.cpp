#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);

    if(a[n-1]==a[n-2])
    {
        cout<<a[n-1]<<" "<<a[n-1]<<endl;
        return 0;

    }

    vector<int> v;
    int x=a[n-1];

    for(int i=1; i*i<=x; i++)
    {
        if(i*i==x)
        {
            v.pb(i);
        }
        else if(x%i==0)
        {
            v.pb(i);
            v.pb(x/i);
        }

    }

    sort(v.begin(),v.end());

    int y;

    for(int i=0, j=0; i<n; i++)
    {
        if(a[i]==v[j])
            j++;
        else
            y=a[i];

    }

    cout<<x<<" "<<y<<endl;



    return 0;

}
