#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class task
{
public:
    ll a,d;
};

bool cmp(task t1,task t2)
{
    return t1.a<t2.a;
}

int main()
{
    faster

    int n;
    cin>>n;

    task t[n];

    for(int i=0; i<n; i++)
    {
        cin>>t[i].a>>t[i].d;

    }

    sort(t,t+n,cmp);

    ll c=0,r=0;

    for(int i=0; i<n; i++)
    {
        c=c+t[i].a;

        r=r+(t[i].d-c);

        //cout<<c<<" ** "<<r<<endl;

    }

    cout<<r<<endl;




    return 0;
}

