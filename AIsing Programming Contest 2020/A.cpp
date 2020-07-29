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

    int l,r,d,c=0;

    cin>>l>>r>>d;

    for(int i=l; i<=r; i++)
    {
        if(i%d==0)
            c++;
    }

    cout<<c<<endl;




    return 0;
}
