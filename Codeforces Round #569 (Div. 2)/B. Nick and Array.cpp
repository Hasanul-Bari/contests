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
    int a[n];

    int mx=-1,id;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]>=0)
            a[i]=-(a[i]+1);


        if(mx<abs(a[i]))
        {
            mx=abs(a[i]);
            id=i;
        }

    }

    if(n%2==0)
    {
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        a[id]=-a[id]-1;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
