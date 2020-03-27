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

    int t,n,x,y;

    cin>>t;

    while(t--)
    {
        cin>>n;

        map<int, vector<int> > m;
        map<int, vector<int> > :: iterator it;


        while(n--)
        {
            cin>>x>>y;

            m[x].pb(y);

        }

        int p=0,q=0;

        vector<char> v;
        bool hp=false;

        for(it=m.begin(); it!=m.end(); it++)
        {
            //cout<<it->first<<" ** "<<it->second<<endl;

            int pp=it->first,qq;

            sort(m[pp].begin(),m[pp].end());

            for(int i=0; i<m[pp].size(); i++)
            {
                //cout<<pp<<" "<<m[pp][i]<<endl;

                qq=m[pp][i];


                if(pp<p)
                {
                    hp=true;
                    break;
                }
                if(qq<q)
                {
                    hp=true;
                    break;
                }

                for(int i=p; i<pp; i++)
                {
                    //cout<<"R";
                    v.pb('R');
                }


                for(int i=q; i<qq; i++)
                {
                    v.pb('U');
                    //cout<<"U";
                }

                p=pp, q=qq;

            }

            if(hp==true)
                break;


        }
        //cout<<endl;

        if(hp==true)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<v.size(); i++)
                cout<<v[i];
            cout<<endl;
        }


    }




    return 0;
}
