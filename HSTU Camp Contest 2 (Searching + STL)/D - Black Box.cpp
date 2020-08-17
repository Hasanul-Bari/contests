#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main()
{
    faster

    int m,n;
    cin>>m>>n;

    int a[m];

    for(int i=0; i<m; i++)
        cin>>a[i];


    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    ordered_set s;

    for(int i=0,j=0,k=0; j<n; )
    {
        if(s.size()==b[j])
        {
            cout<<*s.find_by_order(j)<<endl;
            j++;
        }
        else
        {
            s.insert(a[i]);
            i++;
        }
    }




    return 0;
}


