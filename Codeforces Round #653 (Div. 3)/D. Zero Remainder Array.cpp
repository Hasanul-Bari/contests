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

    int t,n,k;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            a[i]=a[i]%k;

            if(a[i]==0)
                a[i]=k;
        }

        sort(a,a+n);


    }




    return 0;
}
