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

    int k,d,x;

    cin>>k>>d;

    for(int i=0; i<d; i++)
    {
        cin>>x;

        if(x<k)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    cout<<"awesome"<<endl;




    return 0;
}

