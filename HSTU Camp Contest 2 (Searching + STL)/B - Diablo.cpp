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

    int t,n,q,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>q;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.pb(x);
        }

        char c;

        while(q--)
        {
            cin>>c;
            if(c=='a')
            {
                cin>>x;
                v.pb(x);
            }

            else
            {
                cin>>x;
                cout<<v[x-1]<<endl;
                v.erase(v.begin()+x);
            }
        }
    }






    return 0;
}
