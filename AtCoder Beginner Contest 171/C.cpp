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

    ll n;
    cin>>n;

    vector<char> v;

    while(n!=0)
    {

        int z=n%26;
        n=n/26;
        if(z==0)
            z=26,n--;

        char c=char(z+96);

        //cout<<c<<endl;

        v.pb(c);


    }

    for(int i=v.size()-1; i>=0; i--)
        cout<<v[i];
    cout<<endl;




    return 0;
}
