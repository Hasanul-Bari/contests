#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,t;
    cin>>n>>t;

    int a[n];
    int mpf,mn,pf,c;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i==0)
        {
            mn=a[i];
            pf=0;
            mpf=0;
            c=1;

        }
        else
        {
            if(a[i]<mn)
                mn=a[i];


            if(a[i]>=mn)
            {
                pf=a[i]-mn;
            }

            if(pf>=mpf)
            {
                if(pf==mpf)
                {
                    c++;
                }
                else
                    c=1;

                mpf=pf;
            }

        }

        //cout<<a[i]<<" "<<mpf<<endl;



    }

    cout<<c<<endl;






    return 0;
}
