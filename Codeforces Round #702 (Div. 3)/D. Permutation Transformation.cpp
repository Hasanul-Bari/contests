#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void dc(int n,int a[],int i,int j,int l,int ans[])
{
    int mi,mx;
    for(int k=i; k<=j; k++)
    {
        if(k==i)
        {
            mi=k;
            mx=a[k];
        }
        else if(a[k]>mx)
        {
            mx=a[k];
            mi=k;
        }
    }

    ans[mi]=l;

    if(mi-1>=i)
        dc(n,a,i,mi-1,l+1,ans);
    if(mi+1<=j)
        dc(n,a,mi+1,j,l+1,ans);
}


int main()
{
    faster

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n],ans[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        dc(n,a,0,n-1,0,ans);



        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;



    }




    return 0;
}

