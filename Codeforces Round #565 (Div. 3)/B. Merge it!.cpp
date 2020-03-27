#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int on=0,tw=0,th=0;
        ll x;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%3==0)
                th++;
            else if(x%3==1)
                on++;
            else if(x%3==2)
                tw++;
        }
        //cout<<on<<" "<<tw<<" "<<th<<endl;

        int ans=0;
        int y=min(on,tw);
        ans=ans+th+y;

        on=on-y;
        tw=tw-y;
        ans=ans+(on/3)+(tw/3);

        cout<<ans<<endl;


    }




    return 0;
}
