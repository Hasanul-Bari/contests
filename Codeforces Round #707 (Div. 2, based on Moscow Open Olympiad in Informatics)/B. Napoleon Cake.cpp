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

        int f=0;

        bool b[n];
        for(int i=n-1; i>=0; i--)
        {
            f=max(f,a[i]);

            if(f>0)
                b[i]=1;
            else
                b[i]=0;

            f--;

            if(f<0)
                f=0;
        }

        for(int i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;






    }




    return 0;
}


