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
    ll t,n,w;
    cin>>t;

    while(t--)
    {
        cin>>n>>w;

        ll a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        multiset<ll> ms;
        ms.insert(a[n-1]);

        for(int i=n-2; i>=0; i--)
        {
            ll x=w-a[i];

            auto mx=ms.end(),it=mx;
            mx--;

            if(*mx<x)
            {
                ll z=*mx;
                //cout<<z<<endl;
                ms.erase(mx);
                ms.insert(z+a[i]);
            }
            else
            {

                it=ms.lower_bound(x);


                //cout<<*it<<" --"<<x<<" "<<a[i]<<endl;

                if(*it!=x)
                {
                    if(it==ms.begin())
                    {
                        ms.insert(a[i]);
                    }
                    else
                    {
                        it--;
                        ll z=*it;
                        //cout<<z<<endl;
                        ms.erase(it);
                        ms.insert(z+a[i]);
                    }

                }
                else
                {
                    ll z=*it;
                    //cout<<z<<endl;
                    ms.erase(it);
                    ms.insert(z+a[i]);
                }

            }



        }

        /*for(auto it=ms.begin(); it!=ms.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;*/


        cout<<ms.size()<<endl;




    }




    return 0;
}
