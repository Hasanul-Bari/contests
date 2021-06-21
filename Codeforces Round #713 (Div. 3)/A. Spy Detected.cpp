#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,x;
    cin>>n;

    map<int,int> m;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        m[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {


        if(m[a[i]]==1)
        {

            cout<<i+1<<endl;
            return;
        }
    }
}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

