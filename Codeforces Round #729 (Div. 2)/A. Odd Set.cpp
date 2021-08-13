#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;

    cin>>n;

    int e=0,o=0,x;

    for(int i=0; i<2*n; i++)
    {
        cin>>x;

        if(x%2==0)
            e++;
        else
            o++;
    }

    if(e==o)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


