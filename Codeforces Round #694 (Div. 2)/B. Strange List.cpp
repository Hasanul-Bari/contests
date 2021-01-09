#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class info
{
public:
    ll v,c;

};

int main()
{
    faster

    ll t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>x;

        queue<info> q;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll s=0;
        bool hp=true;

        for(int i=0; i<n; i++)
        {
            if(a[i]%x==0 && hp==true)
            {

                info d;
                d.v=a[i]/x;
                d.c=x;
                q.push(d);
            }
            else
                hp=false;

            s=s+a[i];

        }


        while(!q.empty() && hp==true)
        {
            info d=q.front();
            q.pop();

            s=s+(d.v*d.c);



            if(d.v%x==0)
            {
                d.v=d.v/x;
                d.c=d.c*x;

                q.push(d);
            }
            else
            {
                break;
            }
        }

        while(!q.empty())
        {
            info d=q.front();
            q.pop();

            s=s+(d.v*d.c);
        }


        cout<<s<<endl;
    }




    return 0;
}
