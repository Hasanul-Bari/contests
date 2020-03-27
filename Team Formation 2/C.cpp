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

    int t,n,x,k=1;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int c1=0,c2=0;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(int i=1; i<=n; i++)
        {
            if(a[i]!=i)
            {
                if(a[a[i]]==i)
                {
                    c1++;
                }
                else
                {
                    c2++;
                }
            }

        }

        c1=c1/2;

        if(c2>0)
            c2--;


        cout<<"Case "<<k<<": ";
        k++;

        cout<<c1+c2<<endl;
    }





    return 0;
}

