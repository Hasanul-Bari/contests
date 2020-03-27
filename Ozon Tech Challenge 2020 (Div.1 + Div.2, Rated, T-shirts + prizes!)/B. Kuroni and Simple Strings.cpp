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

    string s;
    cin>>s;

    int x=s.length();

    vector<int> o,c,ans;

    for(int i=0; i<x; i++)
    {
        if(s[i]=='(')
            o.pb(i+1);

        if(s[i]==')')
            c.pb(i+1);
    }

    int m=min(o.size(),c.size());

    int cc=0;
    for(int i=0,j=c.size()-1; i<m; i++,j--)
    {
        int p=o[i], q=c[j];

        if(p>q)
            break;

        //cout<<p<<" "<<q<<endl;

        ans.pb(p);
        ans.pb(q);

    }

    sort(ans.begin(),ans.end());

    if(ans.size()==0)
        cout<<0<<endl;
    else
    {
        cout<<1<<endl<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }





    return 0;
}
