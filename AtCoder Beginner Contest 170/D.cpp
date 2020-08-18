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
    map<int,int>:: iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
    }

    int c=0;

    for(it=m.begin(); it!=m.end(); it++)
    {
        int p=it->first, q=it->second;

        if(p==1)
        {
            if(q==1)
                cout<<1<<endl;
            else
                cout<<0<<endl;
            return 0;
        }

        if(q<=1)
        {
            bool hp=true;

            //cout<<p<<" pp"<<endl;

            for(int i=2; i*i<=p; i++)
            {

                if(i*i==p)
                {

                    if(m[i]!=0)
                    {
                        hp=false;
                        break;
                    }

                    //cout<<i<<" X "<<i<<endl;
                }
                else if(p%i==0)
                {
                    if(m[i]!=0)
                    {
                        hp=false;
                        break;
                    }

                    if(m[p/i]!=0)
                    {
                        hp=false;
                        break;
                    }

                    //cout<<i<<" X "<<p/i<<endl;


                }
            }
            if(hp==true)
                c++;
        }

        //cout<<p<<" ** "<<c<<endl;

    }

    cout<<c<<endl;




    return 0;
}
