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

        int a[n],b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);


        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";

        cout<<endl;

        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";

        cout<<endl;


    }




    return 0;
}
