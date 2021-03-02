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

    int n,k;
    cin>>n>>k;

    string s;

    cin>>s;

    int b=0,f=0;

    for(int i=0; i<n; i++)
    {
        if(i+k<n && s[i+k]=='*')
            f=k;

        if(s[i]=='*')
        {
            b=k+1;
        }
        else
        {
            if(b>0)
            {
                s[i]='*';
            }

        }

        if(b>0)
            b--;
        if(f>0)
            f--;


    }

    cout<<s<<endl;




    return 0;
}


