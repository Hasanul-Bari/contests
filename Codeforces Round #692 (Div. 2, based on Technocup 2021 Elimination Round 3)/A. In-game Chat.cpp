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
    cin>>t;

    string s;

    while(t--)
    {
        cin>>n>>s;

        int c=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]==')')
                c++;
            else
                break;
        }

        if(c>s.length()-c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }




    return 0;
}
