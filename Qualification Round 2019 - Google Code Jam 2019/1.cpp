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

    int t,k=1;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;

        bool hp=false;

        vector<int> v1,v2;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='4')
            {
                v1.pb(2);
                v2.pb(2);
                hp=true;

            }
            else
            {
                v1.pb(s[i]-48);
                if(hp==true)
                    v2.pb(0);
            }
        }

        cout<<"Case #"<<k<<": ";
        k++;



        for(int i=0; i<v1.size(); i++)
            cout<<v1[i];
        cout<<" ";

        for(int i=0; i<v2.size(); i++)
            cout<<v2[i];
        cout<<endl;
    }






    return 0;
}
