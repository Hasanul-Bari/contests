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

    int t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        int d=abs(a-b);

        int s=d/10;

        if(d%10!=0)
            s++;

        cout<<s<<endl;
    }




    return 0;
}
