#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool a[26];

int main()
{
    faster
    int n,k;

    string s;

    cin>>n>>k>>s;

    char c;

    for(int i=0; i<k; i++)
    {
        cin>>c;
        a[c-97]=true;
    }

    ll cc=0,ans=0;
    for(int i=0; i<n; i++)
    {
        if(a[s[i]-97]==true)
        {
            cc++;
        }
        else
        {
            ans=ans+((cc*(cc+1))/2);
            cc=0;
        }
    }
    ans=ans+((cc*(cc+1))/2);

    cout<<ans<<endl;



    return 0;
}
