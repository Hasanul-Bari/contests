#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int k,x;
    cin>>k>>x;

    for(int i=x-(k-1); i<=x+(k-1); i++)
        cout<<i<<" ";
    cout<<endl;




    return 0;
}
