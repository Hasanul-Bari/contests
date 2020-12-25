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

    int a[1500];
    a[0]=0;
    for(int i=1; i<1500; i++)
    {
        //cout<<((i*(i+1))/2)<<endl;

        a[i]=(i*(i+1))/2;

    }

    int t,x;
    cin>>t;

    while(t--)
    {
        cin>>x;

        int i=lower_bound(a,a+1500,x)-a;

        if(a[i]==x+1)
        {
            cout<<i+1<<endl;
        }
        else
            cout<<i<<endl;
    }





    return 0;
}
