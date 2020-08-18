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
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        ll s=0,ss=0;;

        //vector<int> v;

        int i=0,j=n-1;
        while(i<=j)
        {
            if(a[i]<=a[j])
            {
                s=s+a[i];
                //v.pb(s);
                i++;
            }
            else
            {
                s=s+a[j];
                //v.pb(s);
                j--;
            }

            ss=ss+s;
        }

        cout<<ss<<endl;

    }


    return 0;
}
