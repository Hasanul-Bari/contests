#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


string s="abcdefghijklmnopqrstuvwxyz";

int main()
{
    faster

    int t,n,a,b;
    cin>>t;
    //cout<<s[0]<<endl;

    while(t--)
    {
        cin>>n>>a>>b;

        bool hp=false;

        vector<char> v;

        for(int i=0; i<b; i++)
        {
            v.pb(s[i]);
        }

        /*for(int i=b-1; i>=0; i--)
        {
            v.pb(s[i]);
        }


        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;*/


        for(int i=0,j=0; i<n; i++,j++)
        {

            if(j==v.size())
                j=0;


            cout<<v[j];


        }
        cout<<endl;


    }





    return 0;
}
