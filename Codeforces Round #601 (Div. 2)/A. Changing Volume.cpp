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

    int t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        int x=abs(a-b);

        int ans=x/5;

        x=x%5;

        if(x==1 || x==2)
            ans++;
        else if(x==3 || x==4)
            ans=ans+2;

        cout<<ans<<endl;


    }






    return 0;
}
//10 min
