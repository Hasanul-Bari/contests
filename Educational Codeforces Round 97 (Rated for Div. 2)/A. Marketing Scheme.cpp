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

    int t,l,r;
    cin>>t;

    while(t--)
    {
        cin>>l>>r;

        if(2*l<=r)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }




    return 0;
}
