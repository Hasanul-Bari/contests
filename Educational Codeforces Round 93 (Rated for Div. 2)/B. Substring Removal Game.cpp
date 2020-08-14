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

    int t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        vector<int> v;

        int o=0,z=0;

        if(s[0]=='0')
            z++;
        else
            o++;

        for(int i=1; i<s.length(); i++)
        {
            if(s[i]!=s[i-1])
            {
                if(s[i-1]=='1')
                {
                    v.pb(o);
                    o=0;
                }

            }

            if(s[i]=='0')
                z++;
            else
                o++;
        }

        if(o!=0)
            v.pb(o);

        sort(v.begin(),v.end());

        ll s=0;
        for(int i=v.size()-1,j=0; i>=0; i--,j++)
        {
            //cout<<v[i]<<endl;

            if(j%2==0)
                s=s+v[i];
        }

        cout<<s<<endl;



    }




    return 0;
}

