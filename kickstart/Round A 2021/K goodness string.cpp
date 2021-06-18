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

    int t,n,k,tc=1;

    cin>>t;
    string s;

    while(t--)
    {
        cin>>n>>k>>s;
        int kk=0;

        for(int i=0; i<(n/2); i++)
        {
            if(s[i]!=s[n-1-i])
                kk++;
        }

        cout<<"Case #"<<tc<<": "<<abs(k-kk)<<endl;
        tc++;

    }




    return 0;
}
