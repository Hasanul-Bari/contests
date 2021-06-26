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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int i=1; i<n; i++)
        {
            int s=min(a[i],a[i-1]);
            int b=max(a[i],a[i-1]);

            while(s*2<b)
            {
                c++;
                s=s*2;
            }
        }

        cout<<c<<endl;
    }




    return 0;
}
