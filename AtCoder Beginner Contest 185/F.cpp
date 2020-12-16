#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll tree[1300000],a[300000];


ll seg(ll node,ll b,ll e)
{
    if(b==e)
        return tree[node]=a[b];
    else
    {
        ll l=2*node;
        ll r=2*node+1;
        ll mid=(b+e)/2;
        return tree[node]=(seg(l,b,mid)^seg(r,mid+1,e));
    }
}
ll query(ll b,ll e,ll l,ll r,ll node)
{

    if(l<=b&&r>=e)
        return tree[node];
    if(l>e||r<b)
    {
        return 0;
    }

    ll mid=(b+e)/2;

    return (query(b,mid,l,r,2*node)^query(mid+1,e,l,r,2*node+1));
}
void update(ll b,ll e,ll i,ll value,ll node)
{
    if(i<b||i>e)
        return ;
    if(b==e)
    {
        tree[node]=tree[node]^value;
        return;
    }
    ll mid=(b+e)/2;

    update(b,mid,i,value,2*node);
    update(mid+1,e,i,value,2*node+1);

    tree[node]=min(tree[2*node],tree[2*node+1]);

}
int main()
{

    faster

    ll n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];

    seg(1,0,n-1);

    while(m--)
    {
        ll t;
        cin>>t;

        if(t==1)
        {
            ll k,u;
            cin>>k>>u;

            update(0,n-1,k-1,u,1);

        }
        else
        {
            ll l,r;
            cin>>l>>r;
            l--,r--;
            cout<<query(0,n-1,l,r,1)<<endl;
        }
    }


}





