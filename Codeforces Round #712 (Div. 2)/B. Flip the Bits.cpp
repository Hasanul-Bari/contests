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

    string a,b;

    while(t--)
    {
        cin>>n>>a>>b;

        int az[n],ao[n];

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {

                ao[i]=a[i]-48;
                az[i]=1-(a[i]-48);
                //bo[i]=b[i]-48;
                //bz[i]=1-(b[i]-48);
            }
            else
            {
                ao[i]=ao[i-1]+(a[i]-48);
                az[i]=az[i-1]+(1-(a[i]-48));
                //bo[i]=bo[i-1]+(b[i]-48);
                //bz[i]=bz[i-1]+(1-(b[i]-48));
            }

        }

        /*for(int i=0; i<n; i++)
        {
            cout<<az[i]<<" "<<ao[i]<<" "<<bz[i]<<" "<<bo[i]<<endl;
        }*/

        bool f=false, f2=false;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i] && f==false)
            {
                f=true;
            }

            if(a[i]==b[i] && f==true)
            {
                f=false;
                v.pb(i-1);
            }


            if(a[i]==b[i] && f2==false)
            {
                f2=true;
            }

            if(a[i]!=b[i] && f2==true)
            {
                f2=false;
                v.pb(i-1);
            }
        }

        if(f==true)
        {
            v.pb(n-1);

        }


        if(v.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool f=true;
            for(int i=0; i<v.size(); i++)
            {
                //cout<<v[i]<<" * ";
                if(ao[v[i]]!=az[v[i]])
                {
                    f=false;
                    break;
                }
            }
            //cout<<endl;

            if(f==true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }






    return 0;
}
