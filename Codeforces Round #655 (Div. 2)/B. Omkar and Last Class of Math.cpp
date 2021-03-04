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

        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;
        else
        {
            if(n%2==0)
                cout<<2<<" "<<n-2<<endl;
            else
            {
                bool f=false;
                for(int i=3; i*i<=n; i=i+2)
                {
                    if(n%i==0)
                    {
                        cout<<n/i<<" "<<n-(n/i)<<endl;
                        f=true;
                        break;

                    }
                }

                if(f==false)
                    cout<<1<<" "<<n-1<<endl;
            }

        }
    }




    return 0;
}
