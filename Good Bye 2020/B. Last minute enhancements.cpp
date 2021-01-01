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

        for(int i=0; i<n; i++)
        {
            cin>>x;


            if(m[x]!=0)
                m[x+1]++;
            else
                m[x]++;

        }

        cout<<m.size()<<endl;
    }




    return 0;
}
