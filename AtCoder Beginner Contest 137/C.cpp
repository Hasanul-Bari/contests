#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    string s[n];

    map<string,int> m;
    ull ans=0;

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());

        m[s[i]]++;

        if(m[s[i]]>=2)
        {
            ans=ans+(m[s[i]]-1);
        }
    }

    /*for(int i=0; i<n; i++)
    {
        cout<<s[i]<<endl;
    }*/

    cout<<ans<<endl;






    return 0;
}
