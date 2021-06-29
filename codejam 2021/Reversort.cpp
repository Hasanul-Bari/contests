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

    int t,n,tc=1;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        int ans=0;

        for(int i=0; i<n-1; i++)
        {
            int mid,mn;
            for(int j=i; j<n; j++)
            {
                if(j==i)
                {
                    mn=a[j];
                    mid=j;
                }
                else if(mn>a[j])
                {
                    mn=a[j];
                    mid=j;
                }
            }

            int l=mid-i+1;

            ans=ans+l;

            if(l%2!=0)
                l=(l/2)+1;
            else
                l=l/2;

            for(int k=0, j=i; k<l; k++, j++)
            {
                swap(a[j],a[mid]);
                mid--;
            }
        }

        cout<<"Case #"<<tc<<": "<<ans<<endl;
        tc++;
    }




    return 0;
}
