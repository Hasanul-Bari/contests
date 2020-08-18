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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int x,tmp;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
             cin>>x;

             if(i==0)
                v.pb(x);
             else
             {
                 if(x!=tmp+1)
                 {
                     //cout<<x<<" **** "<<tmp+1<<endl;
                     v.pb(x);
                 }

             }

             tmp=x;
        }

        bool hp=true;

        for(int i=1; i<v.size(); i++)
        {
            //cout<<v[i]<<" ** ";

            if(v[i]>v[i-1])
            {
                hp=false;
                break;
            }

        }
        //cout<<endl;


        if(hp==true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;





    }




    return 0;
}
