#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


void solve(int tc)
{
    int n;
    cin>>n;

    int n1=n/2, n2=n/4;

    int x1=sqrt(n1);
    int x2=sqrt(n2);

    //cout<<x1<<" "<<x2<<endl;

    if(n%2==0 && x1*x1==n1)
        cout<<"YES"<<endl;
    else if(n%4==0 && x2*x2==n2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}


int main()
{
    faster


    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}


