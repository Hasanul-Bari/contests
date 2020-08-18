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

    int n,t,a[3];
    cin>>t;

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>n;

        sort(a,a+3);

        int r=(a[2]-a[1])+(a[2]-a[0]);

        r=n-r;

        //cout<<r<<endl;

        if(r<0)
            cout<<"NO"<<endl;
        else if(r%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;


    }






    return 0;
}
