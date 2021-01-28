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

        int x=n/2020;
        int r=n%2020;

        if(r<=x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }






    return 0;
}
