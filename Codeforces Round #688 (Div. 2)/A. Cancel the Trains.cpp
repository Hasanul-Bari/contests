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

    int t,n,m,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        map<int,bool> mm;

        while(n--)
        {
            cin>>x;
            mm[x]=true;
        }

        int c=0;

        while(m--)
        {
            cin>>x;
            if(mm[x]==true)
                c++;
        }

        cout<<c<<endl;
    }




    return 0;
}
