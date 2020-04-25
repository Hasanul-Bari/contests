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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0,j=2; i<n/2; i++,j=j+2)
            {
                cout<<j<<" ";
            }

            int i,j;
            for(i=0,j=2; i<(n/2)/2; i++,j=j+2)
            {

                cout<<j-1<<" ";

            }
            for(i=0; i<(n/2)/2; i++,j=j+2)
            {

                cout<<j+1<<" ";

            }


            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
