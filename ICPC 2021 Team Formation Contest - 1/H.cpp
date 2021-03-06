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

    int n,x;
    cin>>n;

    map<int,int> m;

    int pv=0,mx=0,c=0;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(m[x]!=0)
        {

            if(m[x]<pv)
            {
                m[x]=i;
                c++;
            }
            else
            {
                c=i-m[x];
                pv=m[x];
                m[x]=i;
                //pv=i;
            }



        }
        else
        {
            m[x]=i;
            c++;
        }

        mx=max(mx,c);

        //cout<<c<<endl;

    }

    cout<<mx<<endl;




    return 0;
}

