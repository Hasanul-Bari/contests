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
    int t,n,k1,k2;
    cin>>t;

    while(t--)
    {
        cin>>n>>k1>>k2;

        int x,c;

        while(k1--)
        {
            cin>>x;

            if(x==n)
                c=1;
        }


        while(k2--)
        {
            cin>>x;

            if(x==n)
                c=2;
        }

        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
