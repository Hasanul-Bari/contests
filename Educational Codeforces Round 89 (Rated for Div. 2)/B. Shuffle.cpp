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

    int t,n,m,x,l,r;

    cin>>t;


    while(t--)
    {
        cin>>n>>x>>m;

        int la=x, ra=x;

        while(m--)
        {
            cin>>l>>r;

            if(l<=la && r>=ra)
            {
                la=l;
                ra=r;
            }
            else if(l<=la && r>=la)
            {
                la=l;
            }
            else if(r>=ra && l<=ra)
            {
                ra=r;
            }
        }

        cout<<ra-la+1<<endl;
    }




    return 0;
}
