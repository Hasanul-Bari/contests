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


        ll s=0;

        ll f=(n/5);

        ll th=(n/3)-(n/15);

        ll tw=(n/2)-(n/6)-(n/10)+(n/30);

        ll r=n-(f+th+tw);

        cout<<(f*5)+(th*3)+(tw*2)+r<<endl;
    }




    return 0;
}


