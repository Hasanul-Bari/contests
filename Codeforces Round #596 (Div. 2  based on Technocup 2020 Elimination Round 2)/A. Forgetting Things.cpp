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

    int a,b;
    cin>>a>>b;

    if(a+1==b)
    {
        cout<<a<<" "<<b<<endl;
    }
    else if(a==9 && b==1)
    {
        cout<<(a*10)+9<<" "<<b*100<<endl;
    }
    else if(a==b)
    {
        cout<<(a*10)+1<<" "<<(b*10)+2<<endl;
    }
    else
        cout<<-1<<endl;




    return 0;
}
