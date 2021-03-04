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

        ll s[n];
        ll r[n];

        ll diff[n],a[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];

            a[i]=0;

        }

        //create diff

        for(int i=0; i<n; i++)
        {


            if(i==n-1)
                diff[i]=-a[i];
            else
                diff[i]=a[i+1]-a[i];

            //cout<<diff[i]<<" ";
        }
        //cout<<endl;


        for(int i=0; i<n; i++)
        {




            if(s[i]>1)
            {
                int l=i+2;
                int r=l+(s[i]-1)-1;

                //cout<<s[i]<<" ** "<<l<<" "<<r<<endl;

                if(l>=n)
                    continue;

                if(r>=n)
                    r=n-1;

                //cout<<s[i]<<" "<<i<<" ** "<<l<<" "<<r<<endl;

                if(l-1<0)
                    a[0]=a[0]+1;
                else
                    diff[l-1]=diff[l-1]+1;

                diff[r]=diff[r]-1;
            }
        }


        //make array


        for(int i=1; i<n; i++)
        {
            a[i]=diff[i-1]+a[i-1];
        }

        /*cout<<"Array"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/



        ll ss=0;


        for(int i=n-1; i>=0; i--)
        {
            if(i+s[i]<n)
            {

                if(s[i]-1>0)
                {
                    r[i]=s[i]-1+r[i+s[i]];

                    r[i]=r[i]-a[i];

                    if(r[i]<0)
                        r[i]=0;


                }
                else
                    r[i]=0;



            }
            else
            {
                r[i]=s[i]-1;
                r[i]=r[i]-a[i];

                if(r[i]<0)
                    r[i]=0;
            }

            ss=ss+r[i];
        }


        /*for(int i=0; i<n; i++)
        {
            cout<<r[i]<<" ";
        }
        cout<<" r"<<endl;*/


        cout<<ss<<endl;

    }




    return 0;
}
