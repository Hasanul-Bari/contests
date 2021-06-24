#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class weight
{
public:
    ll wt;
    int id;
};

bool cmp(weight a,weight b)
{
    return a.wt<b.wt;
}

void print(vector<int> v)
{
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void solve(int tc)
{
    ll n,w;
    cin>>n>>w;

    weight a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i].wt;
        a[i].id=i+1;
    }


    sort(a,a+n,cmp);

    ll lw=w/2;

    if(w%2!=0)
        lw++;


    vector<int> v;
    int j=n-1;
    ll s=0;

    while(j>=0 && a[j].wt>w)
    {
        j--;
    }

    bool f=false;

    for( ; j>=0; j--)
    {
        if(s+a[j].wt<=w)
        {
            s=s+a[j].wt;
            v.pb(a[j].id);
        }

        if(s>=lw)
        {
            f=true;
            break;
        }
    }

    //cout<<j<<" **"<<endl;

    if(f==true)
    {
        print(v);
        return;
    }

    for(int i=0; i<j; i++)
    {
        if(s+a[i].wt<=w)
        {
            s=s+a[i].wt;
            v.pb(a[i].id);
        }

        if(s>=lw)
        {
            f=true;
            break;
        }
    }

    if(f==true)
    {
        print(v);
        return;
    }

    cout<<-1<<endl;




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

