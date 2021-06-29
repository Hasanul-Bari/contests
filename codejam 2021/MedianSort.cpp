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

    int t,n,q;
    cin>>t>>n>>q;

    while(t--)
    {
        vector<int> v;

        cout<<"1 2 3"<<endl;

        int sz=3,rp;

        cin>>rp;

        if(rp==2)
        {
            v.pb(1);
            v.pb(2);
            v.pb(3);
        }
        else if(rp==3)
        {
            v.pb(1);
            v.pb(3);
            v.pb(2);
        }
        else
        {
            v.pb(2);
            v.pb(1);
            v.pb(3);
        }


        for(int i=4; i<=n; i++)
        {
            int  l=0;
            int r=sz-1;


            while(l<r)
            {
                int m=l+((r-l)/2);


                cout<<v[m]<<" "<<v[m+1]<<" "<<i<<endl;


                cin>>rp;

                if(rp==v[m])
                {
                    r=m;
                }
                else if(rp==v[m+1])
                {

                    l=m+1;
                }
                else
                {
                    v.insert(v.begin()+m+1,i);
                    sz++;
                    break;
                }
            }

            if(sz!=i)
            {
                if(l==0)
                {
                    v.insert(v.begin(),i);
                }
                else
                {
                    v.pb(i);
                }
                sz++;
            }
        }


        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;


        cin>>rp;
        if(rp==-1)
        {
            break;
        }
    }
}
