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

    cin>>n>>k;

    string s;

    char c='a',cc;

    for(int i=1; i<=k; i++)
    {

        s.pb(c);
        cc=c;
        cc++;
        for(int j=i+1; j<=k; j++)
        {
            s.pb(c);
            s.pb(cc);
            cc++;
        }
        c++;

    }

    //cout<<s<<endl;





    //cout<<s<<endl;

    for(int i=0,j=0; i<n; i++,j++)
    {
        if(j==s.length())
            j=0;

        cout<<s[j];
    }

    cout<<endl;




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

