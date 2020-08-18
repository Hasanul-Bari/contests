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

        ll sum=0,csum=0,c=0,l=0,r=0,s=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            csum=csum+x;
            s=s+x;

            if(sum<csum)
            {
                sum=csum;
                l=c;
                r=i;
            }

            if(csum<=0)
            {
                csum=0;
                c=i+1;
            }


        }

        //cout<<l<<" "<<r<<" "<<sum<<" "<<s<<endl;

        if(l==0 && r==n-1)
            cout<<"YES"<<endl;
        else
        {
            if(s>sum)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }



    }




    return 0;
}
