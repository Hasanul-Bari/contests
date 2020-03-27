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

    int t,k=1;
    cin>>t;

    int x1,x2,y1,y2;

    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;

        int m;
        cin>>m;



        cout<<"Case "<<k<<":"<<endl;
        k++;

        int x,y;
        while(m--)
        {
            cin>>x>>y;

            if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }




    return 0;
}

