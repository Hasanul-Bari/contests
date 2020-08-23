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

    int t,k=1;
    cin>>t;

    int n;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        int diff=a[1]-a[0],mx=2,l=2;

        for(int i=2; i<n; i++)
        {
            //cout<<a[i]-a[i-1]<<" ***** "<<diff<<" = "<<a[i]<<endl;
            if(a[i]-a[i-1]==diff)
            {
                l++;
                mx=max(mx,l);
            }
            else
            {

                l=2;
                diff=a[i]-a[i-1];
            }

            //cout<<mx<<" mx l "<<l<<endl;
        }
        mx=max(mx,l);

        cout<<"Case #"<<k<<": "<<mx<<endl;
        k++;
    }




    return 0;
}
