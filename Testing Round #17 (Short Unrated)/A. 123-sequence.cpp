#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[3];

int main()
{
    faster

    int n,x;
    cin>>n;



    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x-1]++;
    }
    sort(a,a+3);

    cout<<n-a[2]<<endl;




    return 0;
}
