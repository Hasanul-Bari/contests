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

        int a[n];

        map<int,bool> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                    m[abs(a[i]-a[j])]=true;
            }
        }

        cout<<m.size()<<endl;
    }




    return 0;
}
