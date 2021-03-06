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


    int n;

    cin>>n;

    list<int> l;
    for(int i=1; i<=n; i++)
    {
        l.pb(i);
    }

    while(l.size()>=2)
    {
        auto it=l.begin();
        it++;

        cout<<*it<<" ";
        l.erase(it);
    }

    auto it=l.begin();
    cout<<*it<<endl;





    return 0;
}

