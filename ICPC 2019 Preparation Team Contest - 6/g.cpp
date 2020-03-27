#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    cout<<'a'-97<<endl;
    int t,n;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>n>>s;
        int a[26];

        for(int i=0; i<26; i++)
            a[i]=0;

        for(int i=0; i<n; i++)
        {
            a[s[i]-97]++;
        }

        int c=0;

        for(int i=0; i<26; i++)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
        }

        if(n%2!=0 && c>0)
            cout<<c-1<<endl;
        else








    }




    return 0;
}
