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

        map<int,int> m;

        bool hp=false;

        for(int i=1; i<=n; i++)
        {
            cin>>x;

            if(m[x]!=0)
            {
                int z=m[x];

                //cout<<i<<" "<<z<<endl;
                if(i-z>=2)
                    hp=true;
            }
            else
                m[x]=i;
        }

        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
