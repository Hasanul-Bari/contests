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

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        int c=1;
        for(int i=0; i<n; i++ )
        {
            //cout<<a[i]<<" **  "<<c<<endl;


            if(a[i]==c)
            {
                c++;
            }
            else if(a[i]>c)
            {
                //cout<<"Enter\n";
                int z=a[i]-c;
                //cout<<z<<endl;
                if(x>=z)
                {
                    //cout<<z<<endl;
                    c=c+z;
                    x=x-z;
                    c=a[i]+1;

                    //cout<<"x "<<x<<endl;
                }
            }


            //cout<<c<<endl;

        }


        cout<<c-1+x<<endl;


    }




    return 0;
}
