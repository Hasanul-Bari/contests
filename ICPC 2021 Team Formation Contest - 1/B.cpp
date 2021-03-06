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

    int n,x;

    cin>>n>>x;

    ll a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int c=0;

    for(int i=0,j=n-1; i<n; )
    {

        if(i>j)
            break;

        if(i==j)
        {
            c++;
            i++;
            j--;
        }
        else if(a[i]+a[j]<=x)
        {
            i++;
            j--;
            c++;
        }
        else
        {
            j--;
            c++;
        }


        //cout<<i<<" "<<j<<endl;

    }

    cout<<c<<endl;




    return 0;
}

