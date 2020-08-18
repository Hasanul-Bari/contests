#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t;
    ll n;

    cin>>t;
    while(t--)
    {
        cin>>n;

        int c=0;

        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else if(n%3==0)
                n=(2*n)/3;
            else if(n%5==0)
                n=(4*n)/5;
            else
            {
                c=-1;
                break;
            }
            c++;
        }
        cout<<c<<endl;

    }




    return 0;
}
