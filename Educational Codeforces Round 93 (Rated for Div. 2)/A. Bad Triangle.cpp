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
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        if(a[0]+a[1]<=a[n-1])
            cout<<1<<" "<<2<<" "<<n<<endl;
        else
            cout<<-1<<endl;
    }




    return 0;
}

