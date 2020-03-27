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
    double a,b;

    cin>>a>>b;

    a=a/0.08;
    b=b/0.1;

    cout<<a<<" ** "<<b<<endl;

    int x=(int) a;
    int y=(int) b;

    cout<<x<<" "<<y<<endl;

    if(x==y)
        cout<<x<<endl;
    else
        cout<<-1<<endl;




    return 0;
}
