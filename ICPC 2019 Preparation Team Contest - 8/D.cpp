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

    int t,k,n;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int a=k%3;
        int b=(k+1)%3;

        //cout<<a<<" "<<b<<endl;

        if(a==1 && b==2)
            cout<<"yes"<<endl;
        else if(a==2 && b==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }




    return 0;
}
