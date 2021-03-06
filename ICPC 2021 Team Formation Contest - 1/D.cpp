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
    int s;
    int e;
};

bool cmp(timee t1,timee t2)
{

    return t1.e<t2.e;
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

        tmp.s=u;
        tmp.e=v;


        tm.pb(tmp);


    }

    sort(tm.begin(),tm.end(),cmp);

    int c=1,pv=0;

    for(int i=0; i<tm.size(); i++)
    {
        if(tm[i].s>=tm[pv].e)
        {
            c++;
            pv=i;
        }
    }




    cout<<c<<endl;




    return 0;
}

