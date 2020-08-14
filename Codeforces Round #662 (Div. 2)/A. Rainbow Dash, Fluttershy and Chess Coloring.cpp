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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==1 || n==2)
            cout<<n<<endl;
        else
        {
            cout<<2+(n/2)-1<<endl;
        }

    }




    return 0;
}
