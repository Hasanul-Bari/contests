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

        if(n>=d)
            cout<<"YES"<<endl;
        else
        {
            for(int i=1; i<n; i++)
            {
                double x=ceil(double(d)/2.0);

                cout<<x<<endl;

                int y=(int)x+1;

                if(n>=y)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }


        }
    }




    return 0;
}
