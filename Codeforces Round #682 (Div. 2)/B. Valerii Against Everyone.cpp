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
        bool f=false;
        map<int,int> m;

        while(n--)
        {
            cin>>x;
            m[x]++;

            if(m[x]>1)
                f=true;
        }

        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
