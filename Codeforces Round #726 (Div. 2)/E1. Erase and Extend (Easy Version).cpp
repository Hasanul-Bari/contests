#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,k;

    string s;

    cin>>n>>k>>s;


    int mx,l;

    string pre,curr,sml;

    for(int i=0; i<n; i++)
    {
        pre.pb(s[i]);

        for(int j=0,l=0; j<k; j++,l++)
        {
            if(l==pre.length())
            {
                l=0;
            }

            curr.pb(pre[l]);
        }

        //cout<<curr<<endl;

        if(i==0)
        {
            sml=curr;
        }
        else if(sml>curr)
        {
            sml=curr;
        }


        curr.clear();
    }


    cout<<sml<<endl;


}


int main()
{
    faster

    int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

