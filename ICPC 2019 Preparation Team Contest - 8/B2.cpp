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

        int a[n+1];
        for(int i=1; i<=n; i++)
            a[i]=i;

        vector<int> v;
        list<int> l;
        list<int> :: iterator it;

        cout<<n/2<<endl;

        for(int i=0; i<n/2; i++)
        {

            int y=((n/2)-i);
            for(int j=1; j<=y; j++)
            {
                cout<<a[j]<<" ";
            }

            for(int j=0; j<v.size();  j++)
            {
                cout<<v[j]<<" ";
            }

            for(it=l.begin(); it!=l.end(); it++)
            {
                cout<<*it<<" ";
            }

            int x=(n/2)+1+i;
            for(int j=x; j<=n; j++)
            {
                if(j==n)
                    cout<<a[j];
                else
                    cout<<a[j]<<" ";
            }

            v.pb(a[x]);
            l.push_front(a[y]);

            cout<<endl;



        }


    }




    return 0;
}
