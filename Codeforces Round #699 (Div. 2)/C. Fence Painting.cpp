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

    int t,n,mm;
    cin>>t;

    while(t--)
    {
        cin>>n>>mm;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int x,c=0;
        map<int,int> m,rt;
        map<int, vector<int> > id;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            m[x]=i+1;
            if(x!=a[i])
            {
                rt[x]++;
                c++;
                id[x].pb(i+1);
            }
        }


        vector<int> ans;
        for(int i=0; i<mm; i++)
        {
            cin>>x;

            if(rt[x]>0)
            {
                rt[x]--;
                c--;

                ans.pb(id[x].back());
                id[x].pop_back();


            }
            else if(m[x]>0)
            {
                ans.pb(m[x]);

            }
            else
            {
                ans.pb(-1);
            }

        }

        //cout<<c<<" ** "<<rc<<endl;

        if(c==0 && ans.back()!=-1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<ans.size(); i++)
            {
                if(ans[i]==-1)
                    ans[i]=ans.back();

                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;




    }




    return 0;
}
