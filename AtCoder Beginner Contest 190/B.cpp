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


    int n,s,d,x,y;
    cin>>n>>s>>d;

    bool f=false;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;

        if(x<s && y>d)
            f=true;
    }

    if(f==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    return 0;
}
