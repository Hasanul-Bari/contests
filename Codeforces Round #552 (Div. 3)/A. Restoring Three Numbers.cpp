#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int a[4];
    for(int i=0; i<4; i++)
        cin>>a[i];

    sort(a,a+4);

    /*for(int i=0; i<3; i++)
        cout<<a[i]<<" ";*/

    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;


    return 0;
}
