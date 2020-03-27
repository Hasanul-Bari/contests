#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    ll n,m,k,x,y;
    cin>>n>>m>>k;
    ll ans=0,p=0,sh=0,pk=k;
    for(int i=1; i<=m; i++)
    {
        cin>>x;
        //cout<<x<<" * "<<p<<endl;

        if(x>pk)
        {
            pk=pk+sh;
            p=0;
            sh=0;

        }

        if(x>pk)
        {
            ll z=x-pk;
            ll h=z/k;
            if(z%k!=0)
                h++;

            //cout<<"z= "<<z<<endl;

            pk=pk+(h*k);
            p=0;
            sh=0;
        }

        //cout<<x<<" * "<<p<<" ** "<<pk<<endl;

        if(x<=pk)
        {
            sh++;
            if(p==0)
            {
                ans++;
                //cout<<x<<" "<<ans<<endl;
                p=1;
            }

        }

    }

    cout<<ans<<endl;




    return 0;
}



