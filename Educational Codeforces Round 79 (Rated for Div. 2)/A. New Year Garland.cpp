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

    int a[3];

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);




        if(a[0]+a[1]>=a[2]-1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }




    return 0;
}
