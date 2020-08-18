#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,d;
    cin>>n>>d;

    int x=d+d+1;

    int a=n/x;

    if(n%x!=0)
        a++;

    cout<<a<<endl;




    return 0;
}
