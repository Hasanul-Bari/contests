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

    ll t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int a[n];
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            s.insert(a[i]);

        }

        if(s.size()>k)
            cout<<-1<<endl;
        else
        {


            ll zz=k-s.size();

            cout<<n*k<<endl;

            set <int> :: iterator it;

            for(int j=0; j<n; j++)
            {
                for(int i=0; i<zz; i++)
                    cout<<1<<" ";

                for(it=s.begin();  it!=s.end();  it++)
                {
                    cout<<*it<<" ";
                }

            }
            cout<<endl;



            //cout<<zz<<" z"<<endl;


        }



    }




    return 0;
}
