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

    int t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n;
        int e=0,o=0;
        for(int i=0; i<n; i++)
        {


        cin>>x;

        if(x%2==0)
            e++;
        else
            o++;

        }

        if(o>=1)
            cout<<e<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

