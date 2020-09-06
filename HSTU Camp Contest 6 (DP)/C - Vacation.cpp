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

    int n;
    cin>>n;

    int a[n],b[n],c[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];

        if(i!=0)
        {
            a[i]=a[i]+max(b[i-1],c[i-1]);
            b[i]=b[i]+max(a[i-1],c[i-1]);
            c[i]=c[i]+max(a[i-1],b[i-1]);
        }
    }


    //cout<<a[n-1]<<" "<<b[n-1]<<" "<<c[n-1]<<endl;

    cout<<max(a[n-1],max(b[n-1],c[n-1]))<<endl;









    return 0;
}
