#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster;
    int n,m,x;
    cin>>n>>m;
    set<int> a;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        a.insert(x);

        if(a.size()==n)
        {
            cout<<1;
            a.clear();
        }
        else
            cout<<0;
    }
    cout<<endl;
    return 0;
}
