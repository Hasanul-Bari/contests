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
    string ss;

    while(t--)
    {
        cin>>n>>ss;


        ll s=0,c=0;

        map<int,int> m;
        m[0]++;

        for(int i=0; i<n; i++)
        {
            x=ss[i]-'0';

            s=s+x;

            c=c+m[s-(i+1)];

            m[s]++;

        }

        cout<<c<<endl;
    }




    return 0;
}
