#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int q,n;
    ll x,s=0;
    cin>>q;


    while(q--)
    {
        cin>>n;
        s=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x<=2048)
            {
                if(s<2048)
                    s=s+x;

            }
        }

        if(s>=2048)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }




    return 0;
}
