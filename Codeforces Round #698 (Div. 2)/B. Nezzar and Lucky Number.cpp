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

    int t,q,d;

    cin>>t;



    while(t--)
    {
        cin>>q>>d;

        map<int,int> m;

        int s=0,x=d,i=1;

        while(x!=0)
        {
            s=s+d;
            x=s%10;


            //cout<<x<<" ** ";
            m[x]=i;
            //cout<<m[x]<<endl;
            i++;

            if(x==0)
                break;
        }


        /*for(auto x :  m)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        cout<<endl;*/

        ll a;

        while(q--)
        {
            cin>>a;

            int tm=a;
            bool hp=false;

            while(tm>0)
            {
                if(tm%10==d)
                    hp=true;
                cout<<tm%10<<endl;
                tm=tm/10;
            }

            int z=a%10;

            ll r=m[z];

            if(hp==true)
                cout<<"YES"<<endl;
            else if(r==0)
                cout<<"NO"<<endl;
            else
            {
                //cout<<"r = "<<r<<endl;
                r--;

                ll rm=r*d;

                //cout<<"rm = "<<rm<<endl;


                if(a-rm>0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }




        }


    }






    return 0;
}
