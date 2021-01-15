#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    faster

    int q;

    string s,t;

    cin>>q;

    while(q--)
    {
        cin>>s>>t;

        ll n1=s.length(), n2=t.length();

        //cout<<(n1*n2)/gcd(n1,n2)<<endl;

        ll x=(n1*n2)/gcd(n1,n2);

        vector<char> v;


        int j=0,k=0;
        bool f=true;
        for(int i=0; i<x; i++)
        {
            if(j==n1)
                j=0;

            if(k==n2)
                k=0;

            if(s[j]==t[k])
            {
                v.pb(s[j]);
            }
            else
            {
                f=false;
                break;
            }

            j++;
            k++;
        }

        if(f==false)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }


    }




    return 0;
}
