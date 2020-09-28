#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector<bool> prime(55,true);
vector<int> v;

void seive(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(prime[i]==true)
        {
            v.pb(i);
            //cout<<i<<" ";
        }

    }

}

int main()
{
    //faster

    seive(55);

    int x=v.size();

    int a[4]={4,9,25,49};

    string s;

    int c=0,cc=0;
    for(int i=0; i<x; i++)
    {
        cout<<v[i]<<endl;

        cin>>s;

        if(s=="yes")
            c++;
    }

    for(int i=0; i<4; i++)
    {
        cout<<a[i]<<endl;

        cin>>s;

        if(s=="yes")
            cc++;
    }

    if(cc>0)
        cout<<"composite"<<endl;
    else if(c>1)
        cout<<"composite"<<endl;
    else
        cout<<"prime"<<endl;


    return 0;
}
