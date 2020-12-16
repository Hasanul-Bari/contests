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

    ll n,m,t,a,b,ps,nn;
    cin>>n>>m>>t;

    nn=n;

    bool f=true;
    ps=0;
    while(m--)
    {
        cin>>a>>b;

        ll c=a-ps;
        ps=b;
        if(n-c<=0)
        {
            f=false;
            break;
        }

        n=n-c;
        //cout<<n<<" -- ";
        n=n+(b-a);
        //cout<<n<<endl;

        if(n>nn)
            n=nn;

    }

    ll c=t-ps;
    if(n-c<=0)
    {
        f=false;
    }

    if(f==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;







    return 0;
}
