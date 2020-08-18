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

    int t,n,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n;

        char I[n],O[n];

        for(int i=0; i<n; i++)
            cin>>I[i];

        for(int i=0; i<n; i++)
            cin>>O[i];

        char p[n][n];
        for(int i=0; i<n; i++)
        {
            p[i][i]='Y';

            bool hp=true;
            for(int j=i+1; j<n; j++)
            {
                if(hp==true)
                {
                    if(O[j-1]=='Y' && I[j]=='Y')
                    {
                        p[i][j]='Y';
                    }
                    else
                    {
                        p[i][j]='N';
                        hp=false;
                    }
                }
                else
                    p[i][j]='N';
            }

            hp=true;

            for(int j=i-1; j>=0; j--)
            {
                if(hp==true)
                {
                    if(O[j+1]=='Y' && I[j]=='Y')
                    {
                        p[i][j]='Y';
                    }
                    else
                    {
                        p[i][j]='N';
                        hp=false;
                    }
                }
                else
                    p[i][j]='N';
            }
        }

        cout<<"Case #"<<k<<":"<<endl;
        k++;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<p[i][j];
            }
            cout<<endl;
        }
    }




    return 0;
}
