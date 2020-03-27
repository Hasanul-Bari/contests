#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
{
    faster

    int n,x,y;
    cin>>n;
    vector<int> v[6];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==4)
            y=0;
        else if(x==8)
            y=1;
        else if(x==15)
            y=2;
        else if(x==16)
            y=3;
        else if(x==23)
            y=4;
        else if(x==42)
            y=5;

        if(y==0)
            v[y].push_back(1);
        else
        {
            int p=v[y].size();
            int q=v[y-1].size();

            if(p<q)
                v[y].push_back(1);
        }



    }

    /*for(int i=0; i<6; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int h=v[5].size();
    //cout<<h<<endl;

    int ans=n-(h*6);
    cout<<ans<<endl;


    return 0;
}
