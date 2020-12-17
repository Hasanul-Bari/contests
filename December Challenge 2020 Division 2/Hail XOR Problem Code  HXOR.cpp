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
        cin>>n>>x;

        ll a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int i=0, k=0;
        while(k<x)
        {
            if(i==n-1)
                break;

            if(a[i]==0)
            {
                i++;
                continue;
            }


            ll tmp=a[i],c=0;

            while(tmp!=0)
            {
                //cout<<bitset<32>(tmp)<<endl;
                tmp=tmp>>1;
                c++;
            }

            ll p=1<<(c-1);

            //cout<<(a[i]^p)<<endl;

            int j=i+1;
            for( j=i+1; j<n-1; j++)
            {
                if((a[j]^p)<a[j])
                    break;
            }

            //cout<<"E"<<endl;

            //cout<<i<<" "<<j<<endl;

            a[i]=a[i]^p;
            a[j]=a[j]^p;

            k++;

        }

        int r=x-k;

        if(n==2 && r>0 && r%2!=0)
        {
            a[n-1]=a[n-1]^1;
            a[n-2]=a[n-2]^1;
        }

        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
