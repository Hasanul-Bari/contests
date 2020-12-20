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
    map< pair<int,int>, int > m;
    map< pair<int,int>, int > :: iterator it;

    m[{0,1}]=1;
    m[{0,-1}]=1;
    m[{1,0}]=2;
    m[{-1,0}]=2;

    cout<<m.size()<<endl;

    for(int i=0; i<100; i++)
    {
        map< pair<int,int>, int > m2;
        for(it=m.begin(); it!=m.end(); it++)
        {
            int x=it->first.first;
            int y=it->first.second;

            //cout<<x<<" ** "<<y<<endl;

            //cout<<it->second<<endl;

            if(it->second==1)
            {

                if(m2[{x+1,y}]==0)
                    m2[{x+1,y}]=2;
                else if(m2[{x+1,y}]==1)
                    m2[{x+1,y}]=3;

                if(m2[{x-1,y}]==0)
                    m2[{x-1,y}]=2;
                else if(m2[{x-1,y}]==1)
                    m2[{x-1,y}]=3;


                //cout<<x+1<<" -- "<<x-1<<endl;

            }

            else if(it->second==2)
            {
                if(m2[{x,y+1}]==0)
                    m2[{x,y+1}]=1;
                else if(m2[{x,y+1}]==2)
                    m2[{x,y+1}]=3;

                if(m2[{x,y-1}]==0)
                    m2[{x,y-1}]=1;
                else if(m2[{x,y-1}]==2)
                    m2[{x,y-1}]=3;

                //cout<<y+1<<" -- "<<y-1<<endl;

            }
            else
            {
                //cout<<"Enter"<<endl;
                if(m2[{x+1,y}]==0)
                    m2[{x+1,y}]=2;
                else if(m2[{x+1,y}]==1)
                    m2[{x+1,y}]=3;

                if(m2[{x-1,y}]==0)
                    m2[{x-1,y}]=2;
                else if(m2[{x-1,y}]==1)
                    m2[{x-1,y}]=3;

                if(m2[{x,y+1}]==0)
                    m2[{x,y+1}]=1;
                else if(m2[{x,y+1}]==2)
                    m2[{x,y+1}]=3;

                if(m2[{x,y-1}]==0)
                    m2[{x,y-1}]=1;
                else if(m2[{x,y-1}]==2)
                    m2[{x,y-1}]=3;
            }
        }


        cout<<i+2<<" "<<m2.size()<<endl;

        /*for(it=m2.begin(); it!=m2.end(); it++)
        {
            cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
        }*/

        m=m2;
    }




    return 0;
}
