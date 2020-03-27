#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }


    sort(a,a+n);
    int max=a[n-1];
    int min=a[0];

    /*int x=ceil(double(n)/2.0);
    int y=a[x-1];
    cout<<y<<endl;*/


    int ans=100002;
    int t;
    for(int x=min; x<=max; x++)
    {

        for(int i=0; i<n; i++)
        {
            if(a[i]>(x+1))
            {
                s=s+abs(a[i]-(x+1));
            }

            else if(a[i]<(x-1))
            {
                s=s+abs(a[i]-(x-1));
            }
        }

        if(ans>s)
        {
            ans=s;
            t=x;

        }
        s=0;


        //cout<<x<<" "<<s<<endl;
    }
    cout<<t<<" "<<ans<<endl;

    return 0;


}
