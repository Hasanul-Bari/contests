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

    ll t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        int c=0;

        if(a!=1 && b==1)
            b++,c++;



        while((a/b)>0)
        {
            a=a/b;
            c++;
        }

        cout<<c<<endl;

    }




    return 0;
}
