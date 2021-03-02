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
    cin>>t;

    int a[3],b[3];

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        cin>>b[0]>>b[1]>>b[2];

        sort(a,a+3);
        sort(b,b+3);

        cout<<a[0]*b[0]+a[1]*b[1]+a[2]*b[2]<<endl;
    }




    return 0;
}


