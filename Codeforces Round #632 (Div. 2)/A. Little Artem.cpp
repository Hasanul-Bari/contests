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

    int t,m,n;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int x=n*m;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(n%2==0 && m%2==0 && i==n && j==m-1)
                    cout<<"B";
                else if(n%2!=0 && m%2==0 && i==n && j==m)
                    cout<<"B";
                else if(n%2==0 && m%2!=0 && i==n && j==m)
                    cout<<"B";


                else if(i%2==0)
                {
                    if(j%2==0)
                        cout<<"B";
                    else
                        cout<<"W";
                }
                else
                {
                    if(j%2==0)
                        cout<<"W";
                    else
                        cout<<"B";
                }

            }
            cout<<endl;
        }




    }




    return 0;
}
