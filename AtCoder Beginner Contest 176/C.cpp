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

    ll s=0,a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i!=0)
        {
            if(a[i-1]>a[i])
            {
                s=s+(a[i-1]-a[i]);

                a[i]=a[i-1];
            }
        }

    }

    cout<<s<<endl;




    return 0;
}


