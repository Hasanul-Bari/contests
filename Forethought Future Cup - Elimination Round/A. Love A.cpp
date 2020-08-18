#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    cin>>s;

    int c=0,x=s.length();
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
            c++;
    }

    int rem=x-c,ans;

    if(rem>=c)
        ans=c+(c-1);
    else
        ans=c+rem;

    cout<<ans<<endl;


    return 0;
}
