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


        bool f=false;
        int c=0,cc=0;
        for(int i=1; i<=n; i++)
        {
            cin>>x;

            if(i!=x)
                f=true;
            else if(i==x && f==true)
            {
                c++;
                f=false;
            }

            if(i==x)
                cc++;
        }

        if(f==true)
            c++;

        if(cc==n)
            c=0;


        if(c>2)
            c=2;

        cout<<c<<endl;




    }




    return 0;
}


