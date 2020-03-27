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

        ll s=0,x,mn;

        for(int i=1; i<=n; i++)
        {
            cin>>x;

            if(i==1)
            {
                mn=x;
                s=s+x;
            }
            else
            {
                if(mn>x)
                    mn=x;

                s=s+mn;
            }

            //cout<<s<<" "<<x<<endl;


        }
        cout<<s<<endl;
    }




    return 0;
}
