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

    int n;
    cin>>n;

    if(n%2==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;

        cout<<1<<" ";

        for(int i=4; i<=2*n; i=i+4)
            cout<<i<<" "<<i+1<<" ";

        for(int i=2; i<2*n; i=i+4)
            cout<<i<<" "<<i+1<<" ";


        cout<<2*n<<endl;
    }




    return 0;
}
