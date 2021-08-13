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
    if(n%3==0)
    {
        cout<<(n/3)<<" "<<(n/3)<<endl;
    }
    else if(n%3==1)
    {
        cout<<(n/3)+1<<" "<<(n/3)<<endl;
    }
    else if(n%3==2)
    {
        cout<<(n/3)<<" "<<(n/3)+1<<endl;
    }

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


