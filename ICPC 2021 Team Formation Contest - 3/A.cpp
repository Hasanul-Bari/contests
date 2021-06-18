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

    ll m,n,s,t;

    cin>>m>>n>>s>>t;

    if(s==m)
    {
        if(t==n)
            cout<<m<<" "<<n<<endl;
        else
            cout<<"0 0"<<endl;

    }
    else if(t==n)
    {
        if(s==m)
            cout<<m<<" "<<n<<endl;
        else
            cout<<"0 0"<<endl;

    }
    else if(s<m && n<t)
        cout<<"0 0"<<endl;
    else if(s>m && n>t)
        cout<<"0 0"<<endl;

    else if(s<m && t<n)
    {
        ll s1=m/s;

        if(s1*t<=n)
            s1=s1*t;
        else
            s1=-1;

        ll s2=n/t;

        if(s2*s<=m)
            s2=s2*s;
        else
            s2=-1;

        if(s1==-1 && s2==-1)
        {
            cout<<"0 0"<<endl;

        }
        else if(s1==-1)
        {
                cout<<s2<<" "<<n<<endl;

        }
        else if(s2==-1)
        {
            cout<<m<<" "<<s1<<endl;

        }
        else
        {
            if(s1+m>=s2+n)
                cout<<m<<" "<<s1<<endl;
            else
                cout<<s2<<" "<<n<<endl;
        }


    }





    return 0;
}
