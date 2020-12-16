#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ull binomial_coefficient(ull n, ull k)
{
    ull ans=1;
    if(k>n-k)
        k=n-k;

    for(ull i=0; i<k; i++)
    {
        ans=ans*(n-i);
        ans=ans/(i+1);
    }

    return ans;
}


int main()
{
    faster

    ull n;
    cin>>n;

    cout<<binomial_coefficient(n-1,11)<<endl;




    return 0;
}
