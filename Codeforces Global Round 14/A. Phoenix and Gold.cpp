#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,x,tp=-1,s=0,w;
    cin>>n>>x;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin>>w;



        s=s+w;

        if(s==x)
        {
            s=s-w;
            tp=w;
        }
        else
        {
            v.pb(w);

            if(tp!=-1)
            {
                v.pb(tp);
                s=s+tp;
                tp=-1;
            }
        }



    }


    if(tp!=-1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto w : v)
        {
            cout<<w<<" ";
        }
    }

    cout<<endl;
}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

