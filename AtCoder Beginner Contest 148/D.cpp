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

    int n,x;
    cin>>n;

    int c=0;

    for(int i=0,j=1; i<n; i++)
    {
        cin>>x;

        if(x==j)
        {
            c++;
            j++;
        }
    }
    if(c==0)
        cout<<-1<<endl;
    else
    cout<<n-c<<endl;









    return 0;
}
