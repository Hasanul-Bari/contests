#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,c,s,t;
    cin>>t;
    for(int h=0; h<t; h++)
    {
        c=0;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        //sort(a,a+n);

        for(int i=0; i<n; i++)
        {

            for(int k=i+2; k<n; k++)
            {
                if(i!=k && (i+1)!=k )
                {
                    if(a[i]+a[i+1]>a[k]  && a[i]+a[k]>a[i+1] &&  a[i+1]+a[k]>a[i+1])
                    {

                        cout<<a[i]<<" "<<a[i+1]<<" "<<a[k]<<endl;
                        c++;
                    }

                }

            }



            cout<<"Case "<<h+1<<": "<<c<<endl;

        }


    }

    return 0;
}
