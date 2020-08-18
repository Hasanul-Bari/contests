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

    int t;
    cin>>t;

    string s;
    while(t--)
    {
        cin>>s;

        int x=s.length();

        int c=1,ans=0;

        for(int i=1; i<x; i++)
        {
            if(s[i]!=s[i-1])
            {
                int z=0;
                while(c!=0)
                {
                    z++;
                    c=c/10;
                }
                z++;
                ans=ans+z;
                c=1;
            }
            else
                c++;

        }

        int z=0;
        while(c!=0)
        {
            z++;
            c=c/10;
        }
        z++;
        ans=ans+z;



        //cout<<ans<<" "<<x<<endl;

        if(ans<x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
