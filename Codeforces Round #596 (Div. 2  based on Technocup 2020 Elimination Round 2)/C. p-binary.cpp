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

    ll tp[32];
    tp[0]=1;
    for(int i=1; i<31; i++)
    {
        tp[i]=tp[i-1]*2;
        cout<<tp[i]<<endl;
    }




    return 0;
}
