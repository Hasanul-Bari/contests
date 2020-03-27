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

    int n;
    ll m,x;

    cin>>n>>m;

    map<ll,ll> a,b;
    map<ll,ll> :: iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;
    }

    for(int i=0; i<n; i++)
    {
        cin>>x;
        b[x]++;
    }

    vector<ll> v1,v2;


    for(it=a.begin(); it!=a.end(); it++)
    {
        v1.pb(it->first);
    }

    for(it=b.begin(); it!=b.end(); it++)
    {
        v2.pb(it->first);
    }

    int l=v1.size();

    ll diff=-1,diff2;

    for(int i=0; i<l; i++)
    {
        int c=0;
        for(int j=0; j<l; j++)
        {
            int z=(i+j)%l;


            //cout<<z<<" == z "<<endl;

            if(a[v1[j]]==b[v2[z]] && diff==-1)
            {
                c++;
                diff=abs(v1[j]-v2[z]);
            }
            else if(a[v1[j]]==b[v2[z]])
            {
                if(diff==abs(v1[j]-v2[z]))
                    c++;
                else if(i+j!=z)
                {
                    if(diff==abs(v1[j]-m)+abs(v2[z]-0))
                        c++;

                    //cout<<"Emter22"<<endl;
                }

                //cout<<"Enter"<<endl;
            }

            //cout<<diff<<" == diff == "<<c<<"  ** "<<v1[j]<<" "<<v2[z]<<endl;

        }

        //cout<<i<<" "<<c<<endl;

        if(c==l)
        {
            cout<<diff<<endl;
            break;
        }
        diff=-1;

    }



    return 0;
}
