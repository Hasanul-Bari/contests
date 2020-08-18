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

    int n,k;

    cin>>n>>k;

    int a[n];

    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }

    for(int i=k; i<n; i++)
    {
        cin>>a[i];

        if(a[i-k]<a[i])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }




    return 0;
}
