#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    string s;
    cin>>s;

    int n=s.length();

    int firstZero=-1,firstFive=-1;



    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='0')
        {
            if(firstZero==-1)
            {
                firstZero=i;
            }
            else
            {
                cout<<n-1-i-1<<endl;
                return;
            }
        }
        else if(s[i]=='5')
        {
            if(firstZero!=-1)
            {
                cout<<n-1-i-1<<endl;
                return;
            }
            else if(firstFive==-1)
            {
                firstFive=i;
            }

        }
        else if(s[i]=='7' || s[i]=='2')
        {
            if(firstFive!=-1)
            {
                cout<<n-1-i-1<<endl;
                return;
            }

        }


    }
}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}



