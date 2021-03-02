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


        if(n%3==0)
        {
            int x=n/3;
            cout<<x-1<<" "<<x<<" "<<x+1<<endl;
        }
        else
            cout<<-1<<endl;
    }




    return 0;
}

