#include<bits/stdc++.h>
#define  ll  long long
using namespace std;

int main()
{

    ll b,k,x,o=0,e=0,d,s;

    cin>>b>>k;

    if(b%2==0)
        s=0;
    else
        s=1;

    for(int i=1; i<=k; i++)
    {
        cin>>x;

        if(i!=k)
        {
            if(x%2==0)
                d=0;
            else
                d=1;

            if(d==1 && s==1)
                o++;
            else
                e++;
        }

        else
        {
            if(x%2==0)
                e++;
            else
                o++;
        }

    }

    //cout<<e<<" "<<o<<endl;

    if(o%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;

    //cout<<s<<endl;

    return 0;
}

