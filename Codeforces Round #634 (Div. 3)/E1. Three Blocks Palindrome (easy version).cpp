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

        vector<int> v[n+1];
        int tmp,j=0,x;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i!=0)
            {
                if(x==tmp)
                    v[j].pb(x);
                else
                {
                    j++;
                    v[j].pb(x);
                }
            }
            else
                v[j].pb(x);

            tmp=x;
        }

        cout<<j<<endl;
        j++;

        int a[j+1],b[j+1];
        a[i]=v[0].size();

        for(int i=1; i<j; i++)
        {
            a[i]=max(a[i-1],v[i],size());
        }

        b[j-1]=v[j-1].size();
        for(int i=j-2; i>=0; i--)
        {
            b[i]=max(b[i-1],v[i],size());
        }





    }




    return 0;
}
