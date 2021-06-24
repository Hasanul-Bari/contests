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

    int t,n,k1,k2,w,b;
    cin>>t;

    while(t--)
    {
        cin>>n>>k1>>k2>>w>>b;

        int ww=k1+k2;
        int bb=(n-k1)+(n-k2);


        //cout<<ww<<" ** "<<bb<<endl;

        if(ww>=w*2 && bb>=b*2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }




    return 0;
}
