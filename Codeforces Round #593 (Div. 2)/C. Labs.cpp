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
    cin>>n;

    int a[n+1][n+1];

    int c=1;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=n; j++)
            {
                a[i][j]=c;
                c++;
            }
        }
        else
        {
            for(int j=n; j>=1; j--)
            {
                a[i][j]=c;
                c++;
            }
        }


    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[j][i]<<" ";

        }
        cout<<endl;
    }




    return 0;
}
