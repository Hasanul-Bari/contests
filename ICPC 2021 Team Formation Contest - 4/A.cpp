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

    int n,tc=1;

    cin>>n;

    while(n!=0)
    {

        string s;

        map<string,int> m;

        for(int i=0; i<n; i++)
        {
            cin>>s;
            m[s]++;
        }


        cout<<"Case "<<tc<<": ";
        tc++;



        vector<int> v;
        for(auto x : m)
        {
            v.pb(x.second);
            //cout<<x.first<<" -- "<<x.second<<endl;
        }

        sort(v.begin(),v.end());
        int z=v.size();


        int mx=v[z-1];



        int c=z,j=0;

        vector<int> vv;

        for(int i=0; i<v.size(); i++)
        {
            if(i==0)
            {
                 //cout<<c;
                 vv.pb(c);
                 j++;
            }
            else if(v[i]==v[i-1])
            {
                //cout<<c;
                j++;
            }
            else if(v[i]!=v[i-1])
            {
                //cout<<c-j;
                c=c-j;
                vv.pb(c);
                j=1;

            }

        }

        cout<<j<<" j"<<endl;

        for(int i=0; i<vv.size(); i++)
        {
            cout<<vv[i];
        }

        cout<<endl;





        cin>>n;




    }




    return 0;
}
