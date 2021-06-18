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

    ll a1,a2,k1,k2,n;

    cin>>a1>>a2>>k1>>k2>>n;


    ll mn=(a1*(k1-1))+(a2*(k2-1));


    //cout<<mn<<endl;


    if(n>mn)
        mn=n-mn;
    else
        mn=0;


    //cout<<mn<<endl;



    if(k1>k2)
    {
        swap(a1,a2);
        swap(k1,k2);

    }


    ll cg=n/k1;

    ll rg=min(a1,cg);

    ll rm=n-(rg*k1);

    //cout<<rg<<endl;


    cg=rm/k2;

    rg=rg+min(cg,a2);


    cout<<mn<<" "<<rg<<endl;













    return 0;
}

