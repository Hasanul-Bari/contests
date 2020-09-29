#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int n;
    cin>>n;

    int a[n];

    int xy,yz,xz,x;

    cout<<"? "<<1<<" "<<2<<endl;
    cin>>xy;
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>yz;
    cout<<"? "<<1<<" "<<3<<endl;
    cin>>xz;

    int xyz=(xy+yz+xz)/2;

    a[0]=xyz-yz;
    a[1]=xyz-xz;
    a[2]=xyz-xy;


    for(int i=4; i<=n; i++)
    {
        cout<<"? "<<i-1<<" "<<i<<endl;

        cin>>x;

        a[i-1]=x-a[i-2];
    }


    cout<<"! ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    return 0;
}
