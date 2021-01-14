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

    int t,n,d;

    cin>>t;


    while(t--)
    {
        cin>>n>>d;

        int c=0;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]>d)
                c++;
        }

        if(c==0)
            cout<<"YES"<<endl;
        else
        {
            sort(a,a+n);

            if(a[0]+a[1]<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }


    }






    return 0;
}
