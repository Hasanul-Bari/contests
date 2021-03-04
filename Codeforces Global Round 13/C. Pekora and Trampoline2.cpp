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
        ll s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];

        }

        ll cm[n];

        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1)
                cm[i]=s[n-1];
            else
            {
                cm[i]=max(s[i],cm[i+1]);
            }

        }

        for(int i=0; i<n; i++)
        {
            cout<<cm[i]<<" ";
        }
        cout<<" **"<<endl;

    }






    return 0;
}

