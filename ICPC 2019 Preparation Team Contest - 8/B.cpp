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

    int t,n;
    cin>>t;

    while(t--)
    {

        cin>>n;

        int a[n+1],temp;

        for(int i=1; i<=n; i++)
            a[i]=i;

        for(int i=1; i<=n/2; i++)
        {
            if(i==1)
            {
                for(int j=1; j<=n; j++)
                {
                    cout<<a[j]<<" ";
                }
                cout<<endl;

            }
            else
            {
                for(int j=1; j<=n/2; j++)
                {
                    if(j==i)
                        temp=a[j];
                    else
                        cout<<a[j]<<" ";
                }
                cout<<a[(n/2)+1]<<" ";

                cout<<temp<<" ";

                for(int j=(n/2)+2; j<=n; j++)
                {
                    if(j==i)
                        temp=a[j];
                    else
                        cout<<a[j]<<" ";
                }

                cout<<endl;
            }
        }

    }




    return 0;
}
