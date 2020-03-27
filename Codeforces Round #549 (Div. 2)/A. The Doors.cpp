#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,x;
    cin>>n;
    int l,r;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x==0)
            l=i;
        if(x==1)
            r=i;
    }


    cout<<min(r,l)<<endl;




    return 0;
}
