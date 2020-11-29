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

    int n,c0,c1,h,t;
    string s;

    cin>>t;

    while(t--)
    {


        cin>>n>>c0>>c1>>h>>s;

        int ss=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                ss=ss+min(c0,c1+h);
            }
            else if(s[i]=='1')
            {
                ss=ss+min(c1,c0+h);
            }

        }

        cout<<ss<<endl;

    }




    return 0;
}
