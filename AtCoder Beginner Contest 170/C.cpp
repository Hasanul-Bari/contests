#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


bool a[105];

int main()
{
    faster

    int x,n,z;
    cin>>x>>n;


    for(int i=0; i<n; i++)
    {
        cin>>z;
        a[z]=true;
    }

    if(a[x]==false)
    {
        cout<<x<<endl;
        return 0;
    }

    int i=x-1,j=x+1;

    while(i>=0 && j<=101)
    {
        if(a[i]==false)
        {
            cout<<i<<endl;
            return 0;
        }

        if(a[j]==false)
        {
            cout<<j<<endl;
            return 0;
        }
        i--,j++;
    }


    while(i>=0)
    {
        if(a[i]==false)
        {
            cout<<i<<endl;
            return 0;
        }


        i--;
    }
    while(j<=101)
    {

        if(a[j]==false)
        {
            cout<<j<<endl;
            return 0;
        }
        j++;
    }






    return 0;
}
