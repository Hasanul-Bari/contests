#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void primefactorize(ll n)
{

    int th=0,tw=0,c=0;

    while(n%2==0)
    {
        n=n/2;
        tw++;
    }

    while(n%3==0)
    {
        n=n/3;
        th++;
    }


    //cout<<tw<<" ** "<<th<<" "<<c<<endl;

    if(n!=1)
        cout<<-1<<endl;
    else if(tw>th)
        cout<<-1<<endl;
    else
    {
        int x=th-tw;

        cout<<tw+(x*2)<<endl;


    }




}

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        primefactorize(n);
    }
    return 0;
}

