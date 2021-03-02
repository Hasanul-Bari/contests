#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[10000009];
int diff[10000009];

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    int nn=10000000;


    ///create diff array


    for(int i=0; i<=nn; i++)
    {
        if(i==n-1)
            diff[i]=-a[i];
        else
            diff[i]=a[i+1]-a[i];

        //cout<<diff[i]<<" ";
    }
    cout<<endl;

    int q,l,r,x;

    while(n--)
    {
        cin>>l>>x;

        r=l+x+1;

        if(l-1<0)
            a[0]=a[0]+1;
        else
            diff[l-1]=diff[l-1]+1;

        diff[r]=diff[r]-x;



    }

    for(int i=1; i<=nn; i++)
    {
        a[i]=diff[i-1]+a[i-1];
    }

    cout<<"Array"<<endl;
    for(int i=0; i<100; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;










    return 0;
}

