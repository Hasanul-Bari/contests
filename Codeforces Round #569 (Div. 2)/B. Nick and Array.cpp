#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int a[n];

    int p=0,ng=0,z=0,minp,maxn,cp=0,cn=0,mone=0,maxp,minn;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            z++;

        else if(a[i]==-1)
            mone++;

        else if(a[i]>0)
        {
            p++;
            if(cp==0)
            {
                minp=a[i];
                maxp=a[i];
                cp=1;
            }
            else
            {
                if(a[i]<minp)
                    minp=a[i];
                if(a[i]>maxp)
                    maxp=a[i];
            }

        }

        else if(a[i]<0)
        {
            ng++;
            if(cn==0)
            {
                maxn=a[i];
                minn=a[i];
                cn=1;
            }
            else
            {
                if(a[i]>maxn)
                    maxn=a[i];
                if(a[i]<minn)
                    minn=a[i];
            }
        }

    }

    if(z==n)
    {
        if(z%2==0)
        {
            for(int i=0; i<n; i++)
                cout<<-1<<" ";
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
                cout<<0<<" ";
            cout<<endl;
        }
    }
    else if(mone==n)
    {
        if(mone%2==0)
        {
            for(int i=0; i<n; i++)
                cout<<-1<<" ";
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
                cout<<0<<" ";
            cout<<endl;
        }
    }
    else
    {
        int ngg=ng;
        if(z%2!=0)
            ng++;

        if(mone%2!=0)
            ng++;
        cp=0,cn=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
                a[i]=-1;

            else if(a[i]==-1)
                a[i]=-1;

            else if(ng%2==0 && p%2==0)
            {
                if(a[i]>0)
                    a[i]=-a[i]-1;
            }

            else if(ng%2==0 && p%2!=0)
            {
                if(a[i]==minp && cp==0)
                {
                    cp=1;
                }
                else if(a[i]>0)
                    a[i]=-a[i]-1;


            }

            else if(ng%2!=0 && p%2==0)
            {
                if(p==0)
                {
                    if(a[i]==maxn && cn==0)
                    {
                        a[i]=-a[i]-1;
                        cn=1;
                    }

                }
                else
                {
                    if(a[i]==minp && cp==0)
                    {
                        cp=1;
                    }
                    else if(a[i]>0)
                        a[i]=-a[i]-1;
                }

            }

            else if(ng%2!=0 && p%2!=0)
            {
                if(a[i]>0)
                    a[i]=-a[i]-1;
            }

            cout<<a[i]<<" ";


        }
        cout<<endl;


    }




    return 0;
}
