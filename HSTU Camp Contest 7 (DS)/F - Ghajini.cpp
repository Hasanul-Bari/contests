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

    int t,n,d,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n>>d;

        ll a[n],ans;

        int i=0;

        map<ll,int> m;
        set<ll> s;

        for( ; i<d; i++)
        {
            cin>>a[i];

            m[a[i]]++;

            s.insert(a[i]);
        }

        //cout<<*s.rbegin()<<" ** "<<*s.begin()<<endl;

        ans=*s.rbegin()-*s.begin();

        int j=0;
        for( ; i<n; i++,j++)
        {
            cin>>a[i];

            m[a[i]]++;

            s.insert(a[i]);

            m[a[j]]--;

            if(m[a[j]]==0)
                s.erase(a[j]);


            //cout<<*s.rbegin()<<" **** "<<*s.begin()<<endl;



            ans=max(ans,*s.rbegin()-*s.begin());
        }

        cout<<"Case "<<k<<": "<<ans<<endl;
        k++;
    }




    return 0;
}
