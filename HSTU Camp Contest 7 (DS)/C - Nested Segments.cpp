#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class info
{
public:
    int b,e,i;
    info(int bb,int ee)
    {
        b=bb;
        e=ee;
    }
};

int main()
{
    faster

    int n,m;
    cin>>n;

    int a[n],b[n];

    for(int i=0; i<n; i++)
        cin>>a[i]>>b[i];


    cin>>m;
    int p[m];

    for(int i=0; i<m; i++)
        cin>>p[i];

    int i=0,j=0;


    stack<info> s;

    while(i<m)
    {

        while(p[i]>=a[j] && p[i]<=b[j])
        {
            s.push(info(a[j],b[j]));
            j++;
        }


    }




    return 0;
}
