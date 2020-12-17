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

    int t,k,n;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int a[n];

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                a[i]=i+1;
            else
                a[i]=-(i+1);
        }

        int p=n/2;

        if(n%2!=0)
            p++;

        if(p<k)
        {
            int r=k-p;

            for(int i=n-1; i>=0; i--)
            {
                if(a[i]<0)
                {
                    a[i]=-(a[i]);
                    r--;
                }

                if(r==0)
                    break;
            }
        }
        else if(p>k)
        {
            int r=p-k;

            for(int i=n-1; i>=0; i--)
            {
                if(a[i]>0)
                {
                    a[i]=-(a[i]);
                    r--;
                }

                if(r==0)
                    break;
            }
        }


        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
