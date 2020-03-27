#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int t;
    cin>>t;
    ll n;

    while(t--)
    {
        map<ll,ll> m;
        cin>>n;

        ll ans=0,max=0,c=0,z,temp;
        bool hp=false;

        ll x;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            c++;
            if(m[x]>0)
            {

                z=m[x];
                m[x]=i;
                //cout<<i-z<<" ** "<<endl;

                if(hp==false)
                {
                    c=i-z;
                    hp=true;
                    temp=z;
                }
                else if(hp==true && temp<z)
                {
                    c=i-z;
                    temp=z;
                }


            }
            else
            {
                m[x]=i;
            }

            if(c>max)
                max=c;

            //cout<<"temp = "<<temp<<endl;
            //cout<<"c= "<<c<<endl;

        }

        cout<<max<<endl;

    }

    return 0;
}


