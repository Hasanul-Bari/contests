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


    int t,n,m,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        char a[n][m];

        int c=0;

        for(int i=0; i<n; i++)
        {

            int cc=0;
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                    cc++;

            }

            if(cc>2)
                c++;



        }

        if(c==2)
            cout<<"Case "<<k<<": Zero"<<endl;
        else
            cout<<"Case "<<k<<": Eight"<<endl;

            k++;

    }



    return 0;
}
