#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int f[100009],a[100009];

int main()
{
    faster;
    int n,m,t=1,x;
    cin>>n>>m;


    for(int i=0; i<m; i++)
    {
        cin>>x;

        f[x]++;


        a[f[x]]++;

        if(a[t]==n)
        {
            cout<<1;
            t++;

        }
        else
            cout<<0;
    }
    cout<<endl;



    return 0;
}
