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

    int q,m;
    cin>>q;
    string s;

    while(q--)
    {
        cin>>s;

        int n=s.length();

        int a[n];

        for(int i=0; i<n; i++)
        {
            a[i]=0;
            for(int j=0; j<n; j++)
            {
                if(i!=j && s[i]<s[j])
                    a[i]=a[i]+abs(i-j);
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" * ";
        }
        cout<<endl;


        cin>>m;
        int b[m];
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }






    }




    return 0;
}
