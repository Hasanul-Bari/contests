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
    int n,m;
    cin>>n>>m;
    string s1[n],s2[m];

    for(int i=0; i<n; i++)
    {
        cin>>s1[i];
    }


    for(int i=0; i<m; i++)
    {
        cin>>s2[i];
    }

    //cout<<"hp"<<endl;
    int q,x;

    cin>>q;

    while(q--)
    {
        cin>>x;

        //cout<<"hp"<<endl;

        int p=x%n, q=x%m;

        if(p==0)
            p=n;
        if(q==0)
           q=m;

        cout<<s1[p-1]<<s2[q-1]<<endl;
    }




    return 0;
}
