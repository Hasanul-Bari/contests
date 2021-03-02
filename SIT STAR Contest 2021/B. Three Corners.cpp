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

    int t,x,y;

    cin>>t;

    while(t--)
    {

        map<int,int> mx,my;
        for(int i=0; i<3; i++)
        {
            cin>>x>>y;
            mx[x]++;
            my[y]++;
        }


        for(auto a: mx)
        {
            if(a.second %2!=0)
            {
                x=a.first;
            }
        }


        for(auto a: my)
        {
            if(a.second %2!=0)
            {
                y=a.first;
            }
        }

        cout<<x<<" "<<y<<endl;


    }






    return 0;
}

