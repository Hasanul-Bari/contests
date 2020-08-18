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
    double x;

    while(t--)
    {
        cin>>n>>x;
        int a[n],ans=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        double s=0.0,av;

        for(int i=n-1,j=0; i>=0; i--,j++)
        {
            s=s+double(a[i]);
            av=s/(j+1);

            //cout<<"s "<<s<<" "<<av<<endl;

            if(av>=x)
            {
                //cout<<"enter"<<endl;
                ans=j+1;
            }

        }

        cout<<ans<<endl;


    }




    return 0;
}
