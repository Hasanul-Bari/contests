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

    int t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int x=0;

        if(k>=n)
        {
            x+=k/n;

            if(k%n!=0)
            x++;

            cout<<x<<endl;



        }
        else
        {

            if(n%k==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;


        }




    }




    return 0;
}
