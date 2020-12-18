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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        ll s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }

        vector<int> v;
        for(int i=1; i*i<=s; i++)
        {
            if(s%i==0)
            {
                if(i==s/i)
                    v.pb(i);
                else
                {
                    v.pb(i);
                    v.pb(s/i);
                }
            }
        }

        ll mn=n-1;
        for(int i=0; i<v.size(); i++)
        {
            ll cl=s/v[i];

            ll ts=0,prev=0,st=0;
            bool f=true;
            for(int j=0; j<n; j++)
            {
                ts=ts+a[j];

                if(ts==v[i])
                {
                    st=st+(j-prev);
                    prev=j+1;
                    ts=0;
                }
                else if(ts>v[i])
                {
                    f=false;
                    break;
                }



            }

            if(ts!=0)
                f=false;

            if(f==true)
            {
                //cout<<v[i]<<" ** "<<st<<endl;
                mn=min(st,mn);
            }
        }

        cout<<mn<<endl;





    }




    return 0;
}
