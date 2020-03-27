#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void primefactorize(int n)
{

    vector<int> v;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                v.pb(i);
                //cout<<i<<" ";
                n=n/i;
            }
        }
    }
    if(n>1)
    {
        //cout<<n<<" ";
        v.pb(n);
    }


    //cout<<endl;


    //cout<<v.size()<<endl;

    int x=v.size();


    if(x>=6)
    {
        cout<<"YES\n"<<v[0]<<" "<<v[1]*v[2]<<" ";

        ll s=v[3];
        for(int i=4; i<x; i++)
            s=s*v[i];
        cout<<s<<endl;
    }
    else if(x==3)
    {
        if(v[0]!=v[1] && v[0]!=v[2] && v[2]!=v[1])
        {
            cout<<"YES\n"<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else if(x==4)
    {
        if(v[0]==v[1])
        {
            if(v[1]==v[2] && v[1]==v[3])
                cout<<"NO"<<endl;
            else
                cout<<"YES\n"<<v[0]<<" "<<v[1]*v[2]<<" "<<v[3]<<endl;
        }
        else
        {
            cout<<"YES\n"<<v[0]<<" "<<v[1]<<" "<<v[2]*v[3]<<endl;
        }
    }
    else if(x==5)
    {
        if(v[0]==v[1])
        {
            if(v[1]==v[2] && v[1]==v[3] && v[1]==v[4])
                cout<<"NO"<<endl;
            else
                cout<<"YES\n"<<v[0]<<" "<<v[1]*v[2]<<" "<<v[3]*v[4]<<endl;
        }
        else
        {
            cout<<"YES\n"<<v[0]<<" "<<v[1]<<" "<<v[2]*v[3]*v[4]<<endl;
        }
    }
    else
        cout<<"NO"<<endl;



}


int main()
{
    faster

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;


        primefactorize(n);


    }



    return 0;
}
