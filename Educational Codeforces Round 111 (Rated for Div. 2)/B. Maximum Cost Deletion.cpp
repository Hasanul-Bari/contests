#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,a,b;
    string s;

    cin>>n>>a>>b>>s;

    ll x=a*n;

    if(b>=0)
    {
        x=x+(n*b);
    }
    else
    {
        char curr='*';
        int c=0;

        for(int i=0; i<n; i++)
        {
            if(curr!=s[i])
            {
                c++;
                curr=s[i];
            }
        }

        c=c/2;
        c++;

        x=x+(c*b);

        //cout<<c<<endl;
    }

    cout<<x<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


