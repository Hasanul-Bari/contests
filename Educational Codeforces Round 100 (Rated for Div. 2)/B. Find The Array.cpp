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

        ll o=0,e=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(i%2==0)
                e=e+a[i];
            else
                o=o+a[i];
        }

        if(e>=o)
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                    cout<<a[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                    cout<<1<<" ";
                else
                    cout<<a[i]<<" ";
            }
        }
        cout<<endl;

    }





    return 0;
}
