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

    int k,n;
    string s,t;
    cin>>k;

    while(k--)
    {
        cin>>n>>s>>t;


        vector<int> v;

        for(int i=0; i<n; i++)
        {
            if(s[i]!=t[i])
            {
                v.pb(i);
            }
        }


        if(v.size()==2)
        {
            if(s[v[0]]==s[v[1]]  && t[v[0]]==t[v[1]] )
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;

    }




    return 0;
}
