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

    int t,n,k;

    cin>>t;

    string s="abc";

    while(t--)
    {
        cin>>n>>k;

        for(int i=0,j=0; i<n; i++)
        {
            if(j==3)
                j=0;
            cout<<s[j];

            j++;
        }
        cout<<endl;
    }




    return 0;
}
