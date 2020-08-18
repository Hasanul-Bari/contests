#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int m,n,k;
    cin>>k>>m>>n;

    int y=min(m,n);

    if(y>=k)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    return 0;
}
