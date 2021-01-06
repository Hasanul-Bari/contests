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

        int o=0,tw=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(x==1)
                o++;
            else
                tw++;



        }

        bool hp=true;

        int x=tw%2;

        if(x==1)
        {
            if(o>=2)
                o=o-2;
            else
                hp=false;
        }

        if(o%2!=0)
            hp=false;


        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
