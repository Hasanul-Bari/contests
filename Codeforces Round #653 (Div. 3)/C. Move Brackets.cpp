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
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        int o=0,ans;

        for(int i=0; i<n; i++)
        {

            if(s[i]=='(')
            {
                o++;
            }
            else
            {
                o--;
            }

            if(i==0)
                ans=o;
            else
                ans=min(ans,o);





        }

        cout<<abs(ans)<<endl;


    }




    return 0;
}
