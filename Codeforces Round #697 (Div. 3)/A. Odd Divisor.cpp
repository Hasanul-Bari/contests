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


    ll t,n;

    cin>>t;


    while(t--)
    {
        cin>>n;

        while(n%2==0)
            n=n/2;

        if(n>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }




    return 0;
}
