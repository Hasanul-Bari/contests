#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

map<int,int> p,sz;
map<int,bool> mm;
int c;

int find_set(int v)
{
    if(v==p[v])
        return v;

    return p[v]=find_set(p[v]);
}

void make_set(int a,int b)
{

    a=find_set(a);
    b=find_set(b);


    if(a!=b)
    {
        if(sz[a]<sz[b])
            swap(a,b);

        p[b]=a;
        sz[a]=sz[a]+sz[b];

        c--;
    }

}

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        p[i]=i;
        sz[i]=1;
    }

    vector< pair<int,int> > v;

    int x,y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }


    int q;
    cin>>q;

    int a[q];

    for(int i=0; i<q; i++)
    {
        cin>>a[i];
        a[i]--;
        mm[a[i]]=true;
    }


    c=n;

    for(int i=0; i<m; i++)
    {
        if(mm[i]==false)
        {
            //cout<<v[i].first<<" **** "<<v[i].second<<endl;

            make_set(v[i].first,v[i].second);

        }
    }



    //cout<<c<<endl;

    int ans[q+1];
    ans[q]=c;

    for(int i=q-1; i>0; i--)
    {
        //cout<<v[a[i]].first<<" ** "<<v[a[i]].second<<endl;

        make_set(v[a[i]].first,v[a[i]].second);

        ans[i]=c;


        //cout<<c<<endl;
    }

    for(int i=1; i<=q; i++)
        cout<<ans[i]<<" ";
    cout<<endl;







    return 0;
}
