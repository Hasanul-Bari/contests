#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class dd
{
public:
    int id,x;
};

bool cmp(dd a,dd b)
{
    return a.x<b.x;
}

int main()
{
    faster

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        dd a[n];

        map<ll,ll> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i].x;
            a[i].id=i+1;

        }

        sort(a,a+n,cmp);
        ll s=0;
        for(int i=0; i<n; i++)
        {
            s=s+a[i].x;

            m[a[i].x]=s;
        }


        vector<int> v;

        int fi=0;

        for(int i=0; i<n; i++)
        {
            //cout<<m[a[i].x]<<" ";

            if(i+1<n && a[i+1].x>m[a[i].x])
            {
                fi=i+1;
            }

        }

        //cout<<fi<<" fi"<<endl;

        for(int i=fi; i<n; i++)
        {
            v.pb(a[i].id);
        }

        sort(v.begin(),v.end());

        cout<<v.size()<<endl;
        for(auto x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }




    return 0;
}

