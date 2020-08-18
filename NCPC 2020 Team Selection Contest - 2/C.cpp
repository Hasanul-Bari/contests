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

    int n;
    bool hp=true;
    while(cin>>n)
    {
        if(n==0)
            break;

        if(hp==true)
            hp=false;
        else
        {
            cout<<endl;
        }


        string s;
        int m;


        int p1=0,p2=0;

        for(int i=0; i<n; i++)
        {
            cin>>s>>m;
            if(s=="DROP")
            {
                cout<<"DROP 2 "<<m<<endl;
                p2=p2+m;
            }
            else
            {
                if(p1>=m)
                {
                    cout<<"TAKE 1 "<<m<<endl;
                    p1=p1-m;
                }
                else
                {
                    if(p1!=0)
                    {
                        cout<<"TAKE 1 "<<p1<<endl;
                        m=m-p1;
                        p1=0;
                    }

                    cout<<"MOVE 2->1 "<<p2<<endl;

                    p1=p1+p2;
                    p2=0;

                    cout<<"TAKE 1 "<<m<<endl;
                    p1=p1-m;

                }

            }
        }

    }




    return 0;
}

