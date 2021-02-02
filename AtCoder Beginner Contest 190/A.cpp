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

    int a,b,c;

    cin>>a>>b>>c;

    if(c==0)
    {
        if(a>b)
            cout<<"Takahashi"<<endl;
        else
            cout<<"Aoki"<<endl;
    }
    else
    {
        if(a>=b)
            cout<<"Takahashi"<<endl;
        else
            cout<<"Aoki"<<endl;
    }




    return 0;
}
