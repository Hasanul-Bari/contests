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

    int t;
    ll n,r;

    cin>>t;

    while(t--)
    {
        cin>>n>>r;


        if(n>r)
            cout<<(r*(r+1))/2<<endl;
        else
        {
            n--;
            cout<<((n*(n+1))/2)+1<<endl;
        }





    }




    return 0;
}

