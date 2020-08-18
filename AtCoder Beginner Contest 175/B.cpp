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

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[i]!=a[j] && a[j]!=a[k] && a[k]!=a[i])
                {
                    if(a[i]+a[j]>a[k])
                        c++;
                }
            }
        }
    }

    cout<<c<<endl;




    return 0;
}
