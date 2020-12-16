#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



ll a[300009];
ll tree[900099];
int c;

void seg(ll node,ll b,ll e)
{
    if(b==e)
    {

        //cout<<node<<" "<<a[b]<<endl;
        tree[node]=a[b];

        //cout<<tree[node].value<<endl;
        return;
    }

    ll left=node*2;
    ll right=(node*2)+1;

    ll mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);

    tree[node]=tree[left]^tree[right];


}

ll query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;

    if(i<=b && e<=j)
        return tree[node];

    ll left=node*2;
    ll right=(node*2)+1;

    ll mid=(b+e)/2;

    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    return x^y;
}



void update(ll node,ll b,ll e,ll i,ll value)
{
    if(i>e || i<b)
        return;

    if(i<=b && e<=i)
    {
        tree[node]^=value;

        return;
    }

    ll left=node*2;
    ll right=(node*2)+1;

    ll mid=(b+e)/2;

    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);


    tree[node]=tree[left]^tree[right];

}



int main()
{
    faster

    int n,q;
    cin>>n>>q;



    for(int i=1; i<=n; i++)
        cin>>a[i];

    seg(1,1,n);


    /*for(int i=1; i<=3*n; i++)
        cout<<tree[i].value<<" ";
    cout<<endl;*/






    ll t,l,r;
    while(q--)
    {
        cin>>t>>l>>r;

        if(t==1)
        {
            update(1,1,n,l,r);

        }
        else
        {
            cout<<query(1,1,n,l,r)<<endl;
        }
    }








    return 0;
}




