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
    int s,e;
};

bool cmp(info a,info b)
{
    return a.s<b.s;
}

int main()
{
    faster

    int n;
    cin>>n;

    info a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i].s>>a[i].e;
    }

    sort(a,a+n,cmp);

    int k=0;
    vector<info> v;

    for(int i=1; i<n; i++)
    {
        if(a[i].s>a[k].e)
        {
            k=i;
            //cout<<a[i].s<<" "<<a[i].e<<endl;
        }
        else
        {
            v.pb(a[i]);
        }
    }

    if(v.size()==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }


    int c=1;
    k=0;

    for(int i=1; i<v.size(); i++)
    {
        if(v[i].s>v[k].e)
        {
            k=i;
            //cout<<v[i].s<<" "<<v[i].e<<endl;
            c++;
        }
    }

    if(c==v.size())
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;









    return 0;
}
