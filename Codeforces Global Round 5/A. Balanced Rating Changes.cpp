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

    int n,x;
    cin>>n;


    int o=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            cout<<x/2<<endl;
        else
        {
            if(o==0)
            {
                double y=floor(double(x/2.0));
                cout<<int(y)<<endl;
                o=1;
            }
            else if(o==1)
            {
                double y=ceil(double(x/2.0));
                cout<<int(y)<<endl;

                o=0;
            }
        }
    }




    return 0;
}
