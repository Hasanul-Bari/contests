#include<bits/stdc++.h>
using namespace std;

int v;

queue<pair<int,int> > q;

void fun(int a[],int n, int l, int r)
{

    //cout<<l<<" ** "<<r<<endl;

    if(r<=l)
    {
        return;
    }

    if((r-l+1)%2==0)
    {
        int m=(l+r-1)/2;


        if(m+1<n && m+1<r)
        {
            q.push({m+1,r});
        }

        if(m-1>=0 && m-1>l)
        {
            q.push({l,m-1});
        }


        if(m+1<n && m+1<r)
        {
            fun(a,n,m+1,r);
        }

        if(m-1>=0 && m-1>l)
        {
            fun(a,n,l,m-1);
        }


    }
    else
    {
        int m=(l+r)/2;


        if(m-1>=0 && m-1>l)
        {
            q.push({l,m-1});
        }

        if(m+1<n && m+1<r)
        {
            q.push({m+1,r});
        }

        if(m-1>=0 && m-1>l)
        {
            fun(a,n,l,m-1);
        }

        if(m+1<n && m+1<r)
        {
            fun(a,n,m+1,r);
        }


    }


}


void solve(int tc)
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        a[i]=0;


    v=1;

    q.push({0,n-1});
    fun(a,n,0,n-1);


    while(!q.empty())
    {
        auto x= q.front();
        q.pop();

        int l=x.first;
        int r=x.second;

        cout<<l<<" ** "<<r<<endl;


        if((r-l+1)%2==0)
        {
            int m=(l+r-1)/2;

            a[m]=v;
            v++;
        }
        else
        {
            int m=(l+r)/2;

            a[m]=v;
            v++;
        }


    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
        solve(i);
}
