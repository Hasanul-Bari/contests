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

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        int i=0,j=n-1,c=0;

        while(i<=j)
        {
            if(a[j]>=k)
            {
                j--;
                c++;
            }
            else if(a[j]+a[i]>=k && i!=j)
            {
                i++;
                j--;
                c++;
            }
            else
            {
                i++;
            }
        }

        cout<<c<<endl;
    }




    return 0;
}
