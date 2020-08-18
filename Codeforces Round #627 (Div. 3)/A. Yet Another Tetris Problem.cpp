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
    int t,n,a;
    cin>>t;

    while(t--)
    {
        cin>>n;
           int z=0;
        bool hp=true;

        while(n--)
        {
            cin>>a;

            if(z==0)
            {
                if(a%2==0)
                    z=1;
                else
                    z=2;

                }


            if(z==1)
            {
                if(a%2==0)
                    z=1;
                else
                    hp=false;
            }

            if(z==2)
            {
                if(a%2==0)
                    hp=false;
                else
                    z=2;
            }
        }

        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
