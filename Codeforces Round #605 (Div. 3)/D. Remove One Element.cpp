#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n,x,temp;
    cin>>n;

    int a[n];
    vector<int> s,e,l;

    int mx=0,z,c=1;

    s.pb(0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i!=0)
        {
            if(a[i-1]>=a[i])
            {
                if(mx<c)
                    mx=c;

                e.pb(i-1);
                l.pb(c);
                s.pb(i);
                c=1;
            }
            else
                c++;
        }

    }
    if(mx<c)
        mx=c;

    e.pb(n-1);
    l.pb(c);

    //cout<<s.size()<<" "<<e.size()<<" "<<l.size()<<endl;

    x=s.size();

    for(int i=1; i<x; i++)
    {
        //cout<<s[i]<<" "<<e[i]<<" "<<l[i]<<endl;

        if(s[i]+1<n && s[i]+1<=e[i])
        {
            if(a[e[i-1]]<a[s[i]+1])
            {
                if(mx<(l[i-1]+l[i]-1))
                    mx=l[i-1]+l[i]-1;
            }
        }

        if(e[i-1]-1>=0 && e[i-1]-1>=s[i-1])
        {
            if(a[e[i-1]-1]<a[s[i]])
            {
                if(mx<(l[i-1]+l[i]-1))
                    mx=l[i-1]+l[i]-1;
            }
        }


    }


    cout<<mx<<endl;





    return 0;
}

/*
14
6 5 4 3 2 4 3 7 2 3 5 8 2 3
*/
