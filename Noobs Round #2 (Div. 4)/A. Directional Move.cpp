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

    int t,n;
    string s,h="ESWN";

    cin>>t;

    while(t--)
    {

        cin>>n>>s;

        int j=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                j++;
            }
            else
                j--;

            if(j==-1)
                j=3;
            if(j==4)
                j=0;
        }

        cout<<h[j]<<endl;
    }




    return 0;
}
