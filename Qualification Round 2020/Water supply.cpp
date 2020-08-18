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
    int n,u,v;
    cin>>n;
    /*for(int i=0; i<n-1; i++)
        cin>>u>>v;*/

    int a[n],c=0,mx=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];

        if(a[i]==0)
            c++;
        else
        {
            cout<<c<<" cc"<<endl;
            c=0;
        }



        if(mx<c)
            mx=c;
    }
    cout<<mx+1<<endl;








    return 0;
}
