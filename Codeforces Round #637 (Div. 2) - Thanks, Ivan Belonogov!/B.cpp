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

    int t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int a[n],b[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=0;
        }

        for(int i=1; i<n-1; i++)
        {

            //cout<<a[i-1]<<" "<<a[i]<<" "<<a[i+1]<<endl;
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                b[i]++;
                //cout<<"enter"<<endl;
            }


        }

        ll c=0,l=0,ans=0,xx;
        for(int i=0; i<k; i++)
        {
            if(i!=0 && i!=k-1)
                c=c+b[i];
        }

        //cout<<c<<endl;

        ans=max(ans,c);

        for(int i=k; i<n; i++)
        {
            c=c-b[i-k+1];
            c=c+b[i-1];




            if(c>ans)
            {
                ans=c;
                l=i-k+1;
            }

            //cout<<i<<" c= "<<c<<endl;
        }
        cout<<ans+1<<" "<<l+1<<endl;


        /*for(int i=0; i<n; i++)
        {
           cout<<b[i]<<" ";

        }
        cout<<endl;*/
    }




    return 0;
}

