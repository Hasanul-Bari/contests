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

    int k,n;
    cin>>k;

    while(k--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        int mx=0;

        for(int i=0; i<n; i++)
        {
            int s=n-i;

            int z=min(s,a[i]);

            if(mx<z)
                mx=z;
        }


        cout<<mx<<endl;


    }




    return 0;
}
