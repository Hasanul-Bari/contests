#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class timee
{
public:
    int t;
    int tp;
};

bool cmp(timee t1,timee t2)
{

    if(t1.t==t2.t)
        return t1.tp<t2.tp;

    return t1.t<t2.t;
}

int main()
{
    faster


    int n;
    cin>>n;

    vector<timee> tm;

    timee tmp;

    int u,v;

    while(n--)
    {
        cin>>u>>v;

        tmp.t=u;
        tmp.tp=0;
        tm.pb(tmp);


        tmp.t=v;
        tmp.tp=1;
        tm.pb(tmp);
    }

    sort(tm.begin(),tm.end(),cmp);


    int c=0,mx=0;

    for(int i=0; i<tm.size(); i++)
    {
        if(tm[i].tp==0)
        {
            c++;
        }
        if(tm[i].tp==1)
        {
            c--;
        }

        //cout<<c<<endl;

        mx=max(mx,c);
    }


    cout<<mx<<endl;




    return 0;
}
