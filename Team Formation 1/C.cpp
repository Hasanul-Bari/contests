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

    int t,k=1;
    cin>>t;

    int r1,r2,c1,c2;

    while(t--)
    {
        cin>>r1>>r2>>c1>>c2;

        if(r1>c1)
        {
            swap(r1,c1);
            swap(r2,c2);
        }

        int y=abs(c2-r2);


        cout<<"Case "<<k<<": ";
        k++;
        if(r2+y==c2)
        {
            //cout<<"E1"<<endl;



            r1=r1+y;
            r2=r2+y;

            int z=abs(r1-c1);

            //cout<<r1<<" "<<r2<<" *** "<<c1<<" "<<c2<<endl;

            if(r1==c1 && r2==c2)
                cout<<1<<endl;
            else if(z%2==0)
                cout<<2<<endl;
            else
                cout<<"impossible"<<endl;

        }
        else if(r2-y==c2)
        {
            //cout<<"E2"<<endl;

            r1=r1+y;
            r2=r2-y;

            //cout<<r1<<" "<<r2<<" *** "<<c1<<" "<<c2<<endl;

            int z=abs(r1-c1);

            if(r1==c1 && r2==c2)
                cout<<1<<endl;
            else if(z%2==0)
                cout<<2<<endl;
            else
                cout<<"impossible"<<endl;


        }

    }


    return 0;
}
