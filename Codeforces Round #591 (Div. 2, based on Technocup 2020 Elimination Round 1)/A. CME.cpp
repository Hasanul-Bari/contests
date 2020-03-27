#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    int q,n;
    cin>>q;

    while(q--)
    {
        cin>>n;

        if(n==2)
            cout<<2<<endl;

        else if(n%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }




    return 0;
}
