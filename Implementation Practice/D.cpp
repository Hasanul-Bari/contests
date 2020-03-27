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

    int n;
    string s;

    cin>>n>>s;

    vector<int> v;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
                v.pb(i);
            else
            {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }



    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
    {
        reverse(s.begin(),s.begin()+v[i]);

        //cout<<s<<endl;
    }

    reverse(s.begin(),s.end());

    cout<<s<<endl;


    return 0;
}
