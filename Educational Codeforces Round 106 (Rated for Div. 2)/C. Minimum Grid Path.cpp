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
        int n;
        cin>>n;

        ll c[n];

        for(int i=0; i<n; i++)
            cin>>c[i];


        ll vs=c[0],hs=c[1];

        ll vc=(vs*n);
        ll hc=(hs*n);

        ll mn=vc+hc;
        ll vm=c[0];
        ll hm=c[1];

        ll c1=1,c2=1;

        //cout<<vc<<" *** "<<hc<<endl;


        for(int i=2; i<n; i++)
        {
            if(i%2==0)
            {
                vm=min(vm,c[i]);

                vs=vs+c[i];

                vc=(vs-vm)+(vm*(n-c1));

                mn=min(mn,vc+hc);

                c1++;


            }
            else
            {
                hm=min(hm,c[i]);

                hs=hs+c[i];

                hc=(hs-hm)+(hm*(n-c2));

                mn=min(mn,vc+hc);

                c2++;
            }

            //cout<<vc<<" ** "<<hc<<endl;
        }


        cout<<mn<<endl;

    }


    return 0;
}

