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

        int sg,mn=0,mx=0;
        ll s=0;




        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i==0)
            {
                mx=x;
                if(x>0)
                    sg=1;
                else
                    sg=-1;
            }

            if(x>0 && sg==1)
            {
                mx=max(mx,x);
            }
            else if(x>0 && sg==-1)
            {
                s=s+mx;
                mx=x;
                sg=1;
            }
            else if(x<0 && sg==-1)
            {
                mx=max(mx,x);
            }
            else if(x<0 && sg==1)
            {
                s=s+mx;
                mx=x;
                sg=-1;
            }

            //cout<<s<<" ** "<<mx<<endl;

        }
        //cout<<s<<" **** "<<mx<<endl;
        s=s+mx;

        cout<<s<<endl;



    }




    return 0;
}

