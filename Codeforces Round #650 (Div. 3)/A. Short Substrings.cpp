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
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;

        for(int i=0; i<s.length(); i++)
        {
            if(i==0)
                cout<<s[i];
            else if(i==s.length()-1)
                cout<<s[i];
            else
            {
                if(i%2!=0)
                    cout<<s[i];
            }


        }
         cout<<endl;
    }




    return 0;
}
