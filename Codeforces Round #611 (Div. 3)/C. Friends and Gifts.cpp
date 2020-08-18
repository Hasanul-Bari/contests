#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


bool vis[200009];

int main()
{
    faster

    int n;
    cin>>n;

    int a[n+1];


    vector<int> v;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

        vis[a[i]]=true;
    }

    for(int i=1; i<=n; i++)
    {
        if(vis[i]==false)
            v.pb(i);
    }



    for(int i=1,j=0; i<=n; i++)
    {
        if(a[i]==0)
        {
            if(j==v.size()-1)
            {
                if(v[0]==i)
                {
                    swap(v[j],v[0]);
                }
                //cout<<v[0]<<" ";
            }

            else
            {
                j++;
                //cout<<v[j]<<" ";
                if(v[j]==i)
                {
                    if(j+1<v.size()-1)
                        swap(v[j],v[j+1]);
                    else
                        swap(v[j],v[0]);
                }

                //cout<<v[j]<<" ";

            }
        }
    }



    for(int i=1,j=0; i<=n; i++)
    {
        if(a[i]!=0)
        {
            cout<<a[i]<<" ";
        }
        else
        {
            if(j==v.size()-1)
            {
                cout<<v[0]<<" ";
            }

            else
            {
                j++;
                cout<<v[j]<<" ";

            }

        }
    }
    cout<<endl;






    return 0;
}
