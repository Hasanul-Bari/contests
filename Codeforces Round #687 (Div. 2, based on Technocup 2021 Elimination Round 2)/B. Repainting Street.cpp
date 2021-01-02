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

    int t,n,k,c;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;


        map<int,bool> m;
        int a[n];

        int mn=INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]=true;
        }

        for(auto x: m)
        {
            int c=x.first,cc=0;

            for(int i=0; i<n; i++)
            {
                if(a[i]!=c)
                {
                    cc++;
                    i=i+k;
                    i--;
                }

            }
            mn=min(mn,cc);
        }

        cout<<mn<<endl;



    }






    return 0;
}

