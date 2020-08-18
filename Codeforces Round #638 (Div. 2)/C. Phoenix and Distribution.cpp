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

    string s;
    cin>>t;

    while(t--)
    {
        cin>>n>>k>>s;

        sort(s.begin(),s.end());

        set<char> ss;
        for(int i=0; i<k; i++)
        {
            ss.insert(s[i]);
        }

        //cout<<ss.size()<<endl;

        if(ss.size()>1)
            cout<<s[k-1]<<endl;
        else
        {
            ss.clear();

            for(int i=k; i<n; i++)
            {
                ss.insert(s[i]);
            }

            if(ss.size()>1)
            {
                cout<<s[k-1];
                for(int i=k; i<n; i++)
                {
                    cout<<s[i];
                }
                cout<<endl;
            }
            else
            {
                ll z=n-k;

                ll p=z/k;

                if(z%k!=0)
                    p++;

                //cout<<p<<" zzzzzzzzz"<<endl;

                cout<<s[k-1];
                for(int i=0; i<p; i++)
                {
                    cout<<s[k];
                }
                cout<<endl;


            }
        }


    }

    return 0;
}
