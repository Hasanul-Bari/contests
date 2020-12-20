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

    ll a[1006];
    a[1]=4;
    a[2]=4;
    a[3]=12;

    for(ll i=4,j=3,k=12; i<=1000; i++)
    {
        if(i%2==0)
        {
            a[i]=j*j;
            j++;
        }
        else
        {
            a[i]=a[i-2]+k;
            k=k+4;
        }

        //cout<<a[i]<<endl;
    }

    int n;
    cin>>n;

    cout<<a[n]<<endl;






    return 0;
}
