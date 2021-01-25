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

    int t,n,x,y;

    cin>>t;

    while(t--)
    {
        cin>>n>>x>>y;

        int d=y-x;

        int mn=INT_MAX,s,df;


        for(int i=1; i<=d; i++)
        {

            if(d%i==0)
            {
                int noe=i+1;
                int dd=d/i;

                if(noe<=n)
                {
                    noe=n-noe;

                    int l=x;

                    //cout<<noe<<endl;



                    while(l-dd>=1 && noe>0)
                    {
                        l=l-dd;
                        noe--;
                    }

                    //cout<<noe<<endl;

                    //cout<<l<<" ** "<<i<<endl;

                    //cout<<l+(dd*(n-1))<<endl;

                    if(mn>l+(dd*(n-1)))
                    {
                        s=l;
                        df=dd;
                    }


                }



            }


        }
        for(int i=0; i<n; i++)
        {
            cout<<s<<" ";
            s=s+df;
        }
        cout<<endl;
    }




    return 0;
}
