#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;
    int nn=n+2;

    ll b[nn];

    ll s=0;

    map<ll,ll> m,m2;

    for(int i=0; i<nn; i++)
        cin>>b[i];

    sort(b,b+nn);


    for(int i=0; i<nn; i++)
    {
        s=s+b[i];
        m2[b[i]]=i+1;

    }

    for(int i=0; i<nn; i++)
    {
        m[b[i]]=s-b[i];
    }

    int x=-1,y=-1;
    for(int i=0; i<nn; i++)
    {
        if( m2[m[b[i]]-b[i]] >0)
        {
            x=m2[m[b[i]]-b[i]];
            y=m2[b[i]];
            //cout<<b[i]<<" *"<<m[b[i]]-b[i]<<endl;
        }
    }
    if(x==-1)
    {
        cout<<-1<<endl;
        return;
    }

    if(x==y)
    {
        if(x-2>=0 && b[x-2]==b[x-1])
            x--;
        else
        {
            cout<<-1<<endl;
            return;
        }

    }


    for(int i=0; i<nn; i++)
    {
        if(i!=x-1)
        {
            if(i!=y-1)
            {
                cout<<b[i]<<" ";
            }
        }

    }
    cout<<endl;


    //cout<<x<<" "<<y<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}


