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

    int n,a,b;
    string s;

    cin>>n>>a>>b>>s;

    vector<int>v1,v2;

    for(int i=0; i<n; i++)
    {

        if(i+1<n && s[i]=='0' && s[i+1]=='0')
        {
            a--;
            s[i]='1';
            s[i+1]='1';
            v1.pb(i+1);
            v1.pb(i+2);

        }

        if(a==0)
            break;
    }


    for(int i=0; i<n; i++)
    {

        if(s[i]=='0')
        {
            b--;
            s[i]='1';

            v2.pb(i+1);

        }

        if(b==0)
            break;
    }

    if(a==0 && b==0)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<v1.size(); i=i+2)
        {
            cout<<v1[i]<<" "<<v1[i+1]<<endl;
        }

        for(int i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<endl;
        }
    }
    else
        cout<<"NO"<<endl;







    return 0;
}

