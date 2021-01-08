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

    int t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n;

        vector<int> o,e;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
                e.pb(x);
            else
                o.pb(x);
        }

        sort(e.begin(),e.end());
        sort(o.begin(),o.end());

        ll ee,oo,a=0,b=0;

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {

                if(e.size()>0)
                    ee=e.back();
                else
                    ee=0;

                if(o.size()>0)
                    oo=o.back();
                else
                    oo=0;


                if(ee>=oo)
                {
                    a=a+ee;
                    if(e.size()!=0)
                        e.pop_back();
                }
                else
                    o.pop_back();


            }
            else
            {
                if(e.size()>0)
                    ee=e.back();
                else
                    ee=0;

                if(o.size()>0)
                    oo=o.back();
                else
                    oo=0;


                if(oo>=ee)
                {
                    b=b+oo;
                    if(o.size()!=0)
                        o.pop_back();
                }
                else
                    e.pop_back();
            }
        }

        //cout<<a<<" "<<b<<endl;


        if(a==b)
            cout<<"Tie"<<endl;
        else if(a>b)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }




    return 0;
}
