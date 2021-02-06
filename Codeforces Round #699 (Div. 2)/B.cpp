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

    int t,k,n;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans=-1,ck=0,j;


        while(1)
        {
            bool f=false;
            for(int i=0; i<n-1; i++)
            {
                if(a[i]<a[i+1])
                {
                    a[i]++;
                    ck++;
                    //cout<<i<<" **"<<endl;
                    f=true;
                    ans=i+1;
                    break;
                }


            }
            if(ck==k)
            {

               break;
            }


            if(f==false)
            {
                ans=-1;
                break;
            }



        }

        cout<<ans<<endl;





    }




    return 0;
}

