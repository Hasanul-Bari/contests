#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



int prime[11]={2 ,3, 5, 7, 11 ,13, 17, 19, 23, 29, 31};



int main()
{
    faster

    int t,n;

    cin>>t;

    while(t--)
    {

        cin>>n;
        int a[n];
        bool vis[n],hp;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            vis[i]=false;
        }
        int c=0;
        for(int i=0; i<11; i++)
        {
            hp=false;
            for(int j=0; j<n; j++)
            {
                if(a[j]%prime[i]==0 && vis[j]==false)
                {
                    a[j]=c+1;
                    hp=true;
                    //cout<<i+1<<" enter"<<endl;
                    vis[j]=true;
                }
            }

            //cout<<i<<" *** "<<hp<<endl;

            if(hp==true)
                c++;

        }

        cout<<c<<endl;
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;

    }





    return 0;
}
