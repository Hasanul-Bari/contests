#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int q;
    cin>>q;

    while(q--)
    {
        int n,x,k;
        cin>>n>>k;
        int mx,mn;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(i==0)
            {
                mx=x;
                mn=x;
            }
            else
            {
                if(mx<x)
                    mx=x;
                if(mn>x)
                    mn=x;
            }
        }
        int z=mx-mn;
        if(z>2*k)
            cout<<-1<<endl;
        else
        {
            cout<<mn+k<<endl;
        }

    }




    return 0;
}
