#include <bits/stdc++.h>
using namespace std;

#define pi 3.1416

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int l,a;
        cin>>l>>a;
        double x=(pi*l*l*a)/360-((1/2)*l*l*sin(a));

        cout<<x<<endl;
    }

    return 0;
}
