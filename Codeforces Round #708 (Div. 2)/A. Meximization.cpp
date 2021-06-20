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

        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;

        }

        auto it=m.begin();


        for(int i=0; i<n; )
        {

            if(it->second>0)
                cout<<it->first<<" ",i++;

            it->second--;

            it++;

            if(it==m.end())
                it=m.begin();
        }

        cout<<endl;



    }




    return 0;
}
