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

    int n,x,c=0;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x;

        if(i%2!=0 && x%2!=0)
            c++;
    }

    cout<<c<<endl;




    return 0;
}
