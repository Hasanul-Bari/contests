#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    int a1[n],a2[n];

    for(int i=0; i<n; i++)
        cin>>a1[i];

    for(int i=0; i<n; i++)
        cin>>a2[i];


    ll s1[n],s2[n];
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            s1[i]=a1[i];
            s2[i]=a2[i];
        }
        else
        {
            s1[i]=max(s2[i-1]+a1[i],s1[i-1]+a1[i]-a1[i-1]);
            s2[i]=max(s1[i-1]+a2[i],s2[i-1]+a2[i]-a2[i-1]);
        }
    }

    cout<<max(s1[n-1],s2[n-1])<<endl;




    return 0;
}
